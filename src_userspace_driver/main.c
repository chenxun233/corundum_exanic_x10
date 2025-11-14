#include "debug.h"
#include "pci.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        debug("Usage: %s <pci_addr>", argv[0]);
        return 1;
    }
    int fd = pci_open_resource(argv[1], "config", O_RDONLY);
    info("opened pci resource %d", fd);
    if (fd == -1) {
        debug("failed to open pci resource");
        return 1;
    }
    close(fd);

}
