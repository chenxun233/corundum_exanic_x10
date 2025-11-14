#ifndef PCI_H
#define PCI_H
#include <fcntl.h>
#include <stdint.h>
#include <unistd.h>
struct ixy_device;

void remove_driver(const char* pci_addr);
void enable_dma(const char* pci_addr);
uint8_t* pci_map_resource(const char* bus_id);
int pci_open_resource(const char* pci_addr, const char* resource, int flags);

#endif 
