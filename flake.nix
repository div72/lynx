{
  description = "A text-mode web browser";

  # Nixpkgs / NixOS version to use.
  inputs.nixpkgs.url = "nixpkgs/nixos-23.11";

  outputs = { self, nixpkgs }:
    let
      lastModifiedDate = self.lastModifiedDate or self.lastModified or "19700101";

      version = "2.9.0dev.12";

      supportedSystems = [ "x86_64-linux" "x86_64-darwin" "aarch64-linux" "aarch64-darwin" ];

      forAllSystems = nixpkgs.lib.genAttrs supportedSystems;

      nixpkgsFor = forAllSystems (system: import nixpkgs { inherit system; overlays = [ self.overlay ]; });

    in

    {

      overlay = final: prev: {

        lynx = with final; stdenv.mkDerivation rec {
          pname = "lynx";
          inherit version;

          src = ./.;

          nativeBuildInputs = [ autoreconfHook pkg-config ];
          buildInputs = [ ncurses openssl ];

          configureFlags = [ "--with-ssl" ];
        };

      };

      packages = forAllSystems (system:
        {
          inherit (nixpkgsFor.${system}) lynx;
        });

      defaultPackage = forAllSystems (system: self.packages.${system}.lynx);

}
