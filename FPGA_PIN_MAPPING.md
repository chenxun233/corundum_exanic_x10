# Cisco Nexus K35-S FPGA Pin Mapping

## Board Information
- **FPGA Part**: xcku035-fbva676-2-e (Xilinx Kintex UltraScale)
- **Board ID**: 0x1CE4_0003
- **Config Voltage**: 1.8V
- **Config Mode**: BPI16

---

## 1. System Clock (100 MHz LVDS)

| Port | Pin | IO Standard | Description |
|------|-----|-------------|-------------|
| `clk_100mhz_p` | D18 | LVDS | 100 MHz differential clock positive |
| `clk_100mhz_n` | C18 | LVDS | 100 MHz differential clock negative |

**Clock Constraint**: 10ns period (100 MHz)

---

## 2. LED Indicators

| Port | Pin | IO Standard | Drive | Slew | Description |
|------|-----|-------------|-------|------|-------------|
| `sfp_1_led[0]` | A25 | LVCMOS18 | 12mA | SLOW | SFP 1 LED bit 0 (RX status) |
| `sfp_1_led[1]` | A24 | LVCMOS18 | 12mA | SLOW | SFP 1 LED bit 1 |
| `sfp_2_led[0]` | E23 | LVCMOS18 | 12mA | SLOW | SFP 2 LED bit 0 (RX status) |
| `sfp_2_led[1]` | D26 | LVCMOS18 | 12mA | SLOW | SFP 2 LED bit 1 |
| `sma_led[0]` | C23 | LVCMOS18 | 12mA | SLOW | SMA LED bit 0 |
| `sma_led[1]` | D23 | LVCMOS18 | 12mA | SLOW | SMA LED bit 1 |

---

## 3. GPIO (Commented Out / Reserved)

| Port | Pin | IO Standard | Description |
|------|-----|-------------|-------------|
| `gpio[0]` | W26 | LVCMOS18 | General purpose I/O 0 |
| `gpio[1]` | Y26 | LVCMOS18 | General purpose I/O 1 |
| `gpio[2]` | AB26 | LVCMOS18 | General purpose I/O 2 |
| `gpio[3]` | AC26 | LVCMOS18 | General purpose I/O 3 |

*Note: These pins are currently commented out in the XDC file.*

---

## 4. SMA Interface (External Timing)

| Port | Pin | IO Standard | Drive | Slew | Pull-up | Direction | Description |
|------|-----|-------------|-------|------|---------|-----------|-------------|
| `sma_in` | B17 | LVCMOS18 | - | - | - | Input | SMA input signal |
| `sma_out` | B16 | LVCMOS18 | 12mA | FAST | - | Output | SMA output signal |
| `sma_out_en` | B19 | LVCMOS18 | 12mA | SLOW | - | Output | SMA output enable |
| `sma_term_en` | C16 | LVCMOS18 | 12mA | SLOW | - | Output | SMA termination enable |

---

## 5. SFP+ Interface

### 5.1 SFP+ 1 High-Speed Transceiver (10G Ethernet)

| Port | Pin | GT Channel | Description |
|------|-----|------------|-------------|
| `sfp_1_rx_p` | D2 | MGTHRXP0_227 (GTHE3_CHANNEL_X0Y12) | SFP 1 receive positive |
| `sfp_1_rx_n` | D1 | MGTHRXN0_227 (GTHE3_CHANNEL_X0Y12) | SFP 1 receive negative |
| `sfp_1_tx_p` | E4 | MGTHTXP0_227 (GTHE3_CHANNEL_X0Y12) | SFP 1 transmit positive |
| `sfp_1_tx_n` | E3 | MGTHTXN0_227 (GTHE3_CHANNEL_X0Y12) | SFP 1 transmit negative |

### 5.2 SFP+ 2 High-Speed Transceiver (10G Ethernet)

| Port | Pin | GT Channel | Description |
|------|-----|------------|-------------|
| `sfp_2_rx_p` | C4 | MGTHRXP1_227 (GTHE3_CHANNEL_X0Y13) | SFP 2 receive positive |
| `sfp_2_rx_n` | C3 | MGTHRXN1_227 (GTHE3_CHANNEL_X0Y13) | SFP 2 receive negative |
| `sfp_2_tx_p` | D6 | MGTHTXP1_227 (GTHE3_CHANNEL_X0Y13) | SFP 2 transmit positive |
| `sfp_2_tx_n` | D5 | MGTHTXN1_227 (GTHE3_CHANNEL_X0Y13) | SFP 2 transmit negative |

### 5.3 SFP+ Reference Clock (161.1328125 MHz)

| Port | Pin | Description |
|------|-----|-------------|
| `sfp_mgt_refclk_p` | H6 | MGTREFCLK0P_227 from X2 |
| `sfp_mgt_refclk_n` | H5 | MGTREFCLK0N_227 from X2 |

**Clock Constraint**: 6.206ns period (161.1328125 MHz)

### 5.4 SFP+ Control Signals

| Port | Pin | IO Standard | Drive | Slew | Pull-up | Direction | Description |
|------|-----|-------------|-------|------|---------|-----------|-------------|
| `sfp_1_tx_disable` | AA12 | LVCMOS18 | 12mA | SLOW | - | Output | SFP 1 TX disable |
| `sfp_2_tx_disable` | W14 | LVCMOS18 | 12mA | SLOW | - | Output | SFP 2 TX disable |
| `sfp_1_npres` | C24 | LVCMOS18 | - | - | Yes | Input | SFP 1 not present (active low) |
| `sfp_2_npres` | D24 | LVCMOS18 | - | - | Yes | Input | SFP 2 not present (active low) |
| `sfp_1_los` | W13 | LVCMOS18 | - | - | Yes | Input | SFP 1 loss of signal |
| `sfp_2_los` | AB12 | LVCMOS18 | - | - | Yes | Input | SFP 2 loss of signal |
| `sfp_1_rs` | B25 | LVCMOS18 | 12mA | SLOW | - | Output | SFP 1 rate select |
| `sfp_2_rs` | D25 | LVCMOS18 | 12mA | SLOW | - | Output | SFP 2 rate select |

### 5.5 SFP+ I2C Interface

| Port | Pin | IO Standard | Drive | Slew | Pull-up | Direction | Description |
|------|-----|-------------|-------|------|---------|-----------|-------------|
| `sfp_i2c_scl` | W11 | LVCMOS18 | 12mA | SLOW | Yes | Bidirectional | SFP I2C clock (shared) |
| `sfp_1_i2c_sda` | Y11 | LVCMOS18 | 12mA | SLOW | Yes | Bidirectional | SFP 1 I2C data |
| `sfp_2_i2c_sda` | Y13 | LVCMOS18 | 12mA | SLOW | Yes | Bidirectional | SFP 2 I2C data |

---

## 6. EEPROM I2C Interface

| Port | Pin | IO Standard | Drive | Slew | Pull-up | Direction | Description |
|------|-----|-------------|-------|------|---------|-----------|-------------|
| `eeprom_i2c_scl` | B26 | LVCMOS18 | 12mA | SLOW | Yes | Bidirectional | EEPROM I2C clock |
| `eeprom_i2c_sda` | C26 | LVCMOS18 | 12mA | SLOW | Yes | Bidirectional | EEPROM I2C data |

---

## 7. PCIe Interface (x8 Gen3)

### 7.1 PCIe Reference Clock (100 MHz)

| Port | Pin | Description |
|------|-----|-------------|
| `pcie_mgt_refclk_p` | T6 | MGTREFCLK0P_225 |
| `pcie_mgt_refclk_n` | T5 | MGTREFCLK0N_225 |

**Clock Constraint**: 10ns period (100 MHz)

### 7.2 PCIe Reset

| Port | Pin | IO Standard | Pull-up | Direction | Description |
|------|-----|-------------|---------|-----------|-------------|
| `pcie_reset_n` | AC22 | LVCMOS18 | Yes | Input | PCIe reset (active low) |

### 7.3 PCIe High-Speed Transceivers (Lane 0-7)

| Port | Pin | GT Channel | Description |
|------|-----|------------|-------------|
| `pcie_rx_p[0]` | P2 | MGTHRXP3_225 (GTHE3_CHANNEL_X0Y7) | PCIe RX lane 0 positive |
| `pcie_rx_n[0]` | P1 | MGTHRXN3_225 (GTHE3_CHANNEL_X0Y7) | PCIe RX lane 0 negative |
| `pcie_tx_p[0]` | R4 | MGTHTXP3_225 (GTHE3_CHANNEL_X0Y7) | PCIe TX lane 0 positive |
| `pcie_tx_n[0]` | R3 | MGTHTXN3_225 (GTHE3_CHANNEL_X0Y7) | PCIe TX lane 0 negative |
| `pcie_rx_p[1]` | T2 | MGTHRXP2_225 (GTHE3_CHANNEL_X0Y6) | PCIe RX lane 1 positive |
| `pcie_rx_n[1]` | T1 | MGTHRXN2_225 (GTHE3_CHANNEL_X0Y6) | PCIe RX lane 1 negative |
| `pcie_tx_p[1]` | U4 | MGTHTXP2_225 (GTHE3_CHANNEL_X0Y6) | PCIe TX lane 1 positive |
| `pcie_tx_n[1]` | U3 | MGTHTXN2_225 (GTHE3_CHANNEL_X0Y6) | PCIe TX lane 1 negative |
| `pcie_rx_p[2]` | V2 | MGTHRXP1_225 (GTHE3_CHANNEL_X0Y5) | PCIe RX lane 2 positive |
| `pcie_rx_n[2]` | V1 | MGTHRXN1_225 (GTHE3_CHANNEL_X0Y5) | PCIe RX lane 2 negative |
| `pcie_tx_p[2]` | W4 | MGTHTXP1_225 (GTHE3_CHANNEL_X0Y5) | PCIe TX lane 2 positive |
| `pcie_tx_n[2]` | W3 | MGTHTXN1_225 (GTHE3_CHANNEL_X0Y5) | PCIe TX lane 2 negative |
| `pcie_rx_p[3]` | Y2 | MGTHRXP0_225 (GTHE3_CHANNEL_X0Y4) | PCIe RX lane 3 positive |
| `pcie_rx_n[3]` | Y1 | MGTHRXN0_225 (GTHE3_CHANNEL_X0Y4) | PCIe RX lane 3 negative |
| `pcie_tx_p[3]` | AA4 | MGTHTXP0_225 (GTHE3_CHANNEL_X0Y4) | PCIe TX lane 3 positive |
| `pcie_tx_n[3]` | AA3 | MGTHTXN0_225 (GTHE3_CHANNEL_X0Y4) | PCIe TX lane 3 negative |
| `pcie_rx_p[4]` | AB2 | MGTHRXP3_224 (GTHE3_CHANNEL_X0Y3) | PCIe RX lane 4 positive |
| `pcie_rx_n[4]` | AB1 | MGTHRXN3_224 (GTHE3_CHANNEL_X0Y3) | PCIe RX lane 4 negative |
| `pcie_tx_p[4]` | AB6 | MGTHTXP3_224 (GTHE3_CHANNEL_X0Y3) | PCIe TX lane 4 positive |
| `pcie_tx_n[4]` | AB5 | MGTHTXN3_224 (GTHE3_CHANNEL_X0Y3) | PCIe TX lane 4 negative |
| `pcie_rx_p[5]` | AD2 | MGTHRXP2_224 (GTHE3_CHANNEL_X0Y2) | PCIe RX lane 5 positive |
| `pcie_rx_n[5]` | AD1 | MGTHRXN2_224 (GTHE3_CHANNEL_X0Y2) | PCIe RX lane 5 negative |
| `pcie_tx_p[5]` | AC4 | MGTHTXP2_224 (GTHE3_CHANNEL_X0Y2) | PCIe TX lane 5 positive |
| `pcie_tx_n[5]` | AC3 | MGTHTXN2_224 (GTHE3_CHANNEL_X0Y2) | PCIe TX lane 5 negative |
| `pcie_rx_p[6]` | AE4 | MGTHRXP1_224 (GTHE3_CHANNEL_X0Y1) | PCIe RX lane 6 positive |
| `pcie_rx_n[6]` | AE3 | MGTHRXN1_224 (GTHE3_CHANNEL_X0Y1) | PCIe RX lane 6 negative |
| `pcie_tx_p[6]` | AD6 | MGTHTXP1_224 (GTHE3_CHANNEL_X0Y1) | PCIe TX lane 6 positive |
| `pcie_tx_n[6]` | AD5 | MGTHTXN1_224 (GTHE3_CHANNEL_X0Y1) | PCIe TX lane 6 negative |
| `pcie_rx_p[7]` | AF2 | MGTHRXP0_224 (GTHE3_CHANNEL_X0Y0) | PCIe RX lane 7 positive |
| `pcie_rx_n[7]` | AF1 | MGTHRXN0_224 (GTHE3_CHANNEL_X0Y0) | PCIe RX lane 7 negative |
| `pcie_tx_p[7]` | AF6 | MGTHTXP0_224 (GTHE3_CHANNEL_X0Y0) | PCIe TX lane 7 positive |
| `pcie_tx_n[7]` | AF5 | MGTHTXN0_224 (GTHE3_CHANNEL_X0Y0) | PCIe TX lane 7 negative |

---

## 8. BPI Flash Interface (16-bit)

### 8.1 Flash Data Bus

| Port | Pin | IO Standard | Drive | Description |
|------|-----|-------------|-------|-------------|
| `flash_dq[0]` | AE10 | LVCMOS18 | 16mA | Flash data bit 0 |
| `flash_dq[1]` | AC8 | LVCMOS18 | 16mA | Flash data bit 1 |
| `flash_dq[2]` | AD10 | LVCMOS18 | 16mA | Flash data bit 2 |
| `flash_dq[3]` | AD9 | LVCMOS18 | 16mA | Flash data bit 3 |
| `flash_dq[4]` | AC11 | LVCMOS18 | 16mA | Flash data bit 4 |
| `flash_dq[5]` | AF10 | LVCMOS18 | 16mA | Flash data bit 5 |
| `flash_dq[6]` | AF14 | LVCMOS18 | 16mA | Flash data bit 6 |
| `flash_dq[7]` | AE12 | LVCMOS18 | 16mA | Flash data bit 7 |
| `flash_dq[8]` | AD14 | LVCMOS18 | 16mA | Flash data bit 8 |
| `flash_dq[9]` | AF13 | LVCMOS18 | 16mA | Flash data bit 9 |
| `flash_dq[10]` | AE13 | LVCMOS18 | 16mA | Flash data bit 10 |
| `flash_dq[11]` | AD8 | LVCMOS18 | 16mA | Flash data bit 11 |
| `flash_dq[12]` | AC13 | LVCMOS18 | 16mA | Flash data bit 12 |
| `flash_dq[13]` | AD13 | LVCMOS18 | 16mA | Flash data bit 13 |
| `flash_dq[14]` | AA14 | LVCMOS18 | 16mA | Flash data bit 14 |
| `flash_dq[15]` | AB15 | LVCMOS18 | 16mA | Flash data bit 15 |

### 8.2 Flash Address Bus

| Port | Pin | IO Standard | Drive | Description |
|------|-----|-------------|-------|-------------|
| `flash_addr[0]` | AD11 | LVCMOS18 | 16mA | Flash address bit 0 |
| `flash_addr[1]` | AE11 | LVCMOS18 | 16mA | Flash address bit 1 |
| `flash_addr[2]` | AF12 | LVCMOS18 | 16mA | Flash address bit 2 |
| `flash_addr[3]` | AB11 | LVCMOS18 | 16mA | Flash address bit 3 |
| `flash_addr[4]` | AB9 | LVCMOS18 | 16mA | Flash address bit 4 |
| `flash_addr[5]` | AB14 | LVCMOS18 | 16mA | Flash address bit 5 |
| `flash_addr[6]` | AA10 | LVCMOS18 | 16mA | Flash address bit 6 |
| `flash_addr[7]` | AA9 | LVCMOS18 | 16mA | Flash address bit 7 |
| `flash_addr[8]` | W10 | LVCMOS18 | 16mA | Flash address bit 8 |
| `flash_addr[9]` | AA13 | LVCMOS18 | 16mA | Flash address bit 9 |
| `flash_addr[10]` | Y15 | LVCMOS18 | 16mA | Flash address bit 10 |
| `flash_addr[11]` | AC12 | LVCMOS18 | 16mA | Flash address bit 11 |
| `flash_addr[12]` | V12 | LVCMOS18 | 16mA | Flash address bit 12 |
| `flash_addr[13]` | V11 | LVCMOS18 | 16mA | Flash address bit 13 |
| `flash_addr[14]` | Y12 | LVCMOS18 | 16mA | Flash address bit 14 |
| `flash_addr[15]` | W9 | LVCMOS18 | 16mA | Flash address bit 15 |
| `flash_addr[16]` | Y8 | LVCMOS18 | 16mA | Flash address bit 16 |
| `flash_addr[17]` | W8 | LVCMOS18 | 16mA | Flash address bit 17 |
| `flash_addr[18]` | W15 | LVCMOS18 | 16mA | Flash address bit 18 |
| `flash_addr[19]` | AA15 | LVCMOS18 | 16mA | Flash address bit 19 |
| `flash_addr[20]` | AE16 | LVCMOS18 | 16mA | Flash address bit 20 |
| `flash_addr[21]` | AF15 | LVCMOS18 | 16mA | Flash address bit 21 |
| `flash_addr[22]` | AE15 | LVCMOS18 | 16mA | Flash address bit 22 |

### 8.3 Flash Control Signals

| Port | Pin | IO Standard | Drive | Pull-up | Direction | Description |
|------|-----|-------------|-------|---------|-----------|-------------|
| `flash_region` | AD15 | LVCMOS18 | - | Yes | Output | Flash region select |
| `flash_ce_n` | AC9 | LVCMOS18 | 16mA | - | Output | Flash chip enable (active low) |
| `flash_oe_n` | AC14 | LVCMOS18 | 16mA | - | Output | Flash output enable (active low) |
| `flash_we_n` | AB10 | LVCMOS18 | 16mA | - | Output | Flash write enable (active low) |
| `flash_adv_n` | Y10 | LVCMOS18 | 16mA | - | Output | Flash address valid (active low) |

---

## 9. GT Transceiver Summary

### GT Common/Quad Assignments

| Interface | Quad | Common | Channels |
|-----------|------|--------|----------|
| SFP+ 1 & 2 | 227 | GTHE3_COMMON_X0Y3 | X0Y12, X0Y13 |
| PCIe Lane 0-3 | 225 | GTHE3_COMMON_X0Y1 | X0Y4, X0Y5, X0Y6, X0Y7 |
| PCIe Lane 4-7 | 224 | GTHE3_COMMON_X0Y0 | X0Y0, X0Y1, X0Y2, X0Y3 |

---

## 10. Clock Summary

| Clock Name | Frequency | Period | Source |
|------------|-----------|--------|--------|
| `clk_100mhz` | 100 MHz | 10 ns | External LVDS (D18/C18) |
| `sfp_mgt_refclk` | 161.1328125 MHz | 6.206 ns | External (H6/H5) |
| `pcie_mgt_refclk` | 100 MHz | 10 ns | External (T6/T5) |
| `clk_125mhz_int` | 125 MHz | 8 ns | Internal MMCM (from 100 MHz) |

---

## 11. Notes for Development

1. **TX Polarity Inversion**: SFP+ 1 and SFP+ 2 TX have polarity inversion enabled (`GT_1_TX_POLARITY=1`, `GT_2_TX_POLARITY=1`)

2. **I2C Interfaces**: All I2C lines are configured as open-drain with internal pull-ups

3. **SFP Control Logic**:
   - `sfp_x_npres`: Active low, indicates SFP module presence
   - `sfp_x_los`: Active high, indicates loss of signal
   - `sfp_x_tx_disable`: Active high, disables SFP TX laser

4. **Flash**: 16-bit BPI flash with 23-bit address bus (8MB addressable)

5. **PCIe**: Configured for x8 Gen3 operation using GTHE3 transceivers

---

## 12. Pin Count Summary

| Category | Pin Count |
|----------|-----------|
| System Clock | 2 |
| LEDs | 6 |
| GPIO (Reserved) | 4 |
| SMA Interface | 4 |
| SFP+ Transceivers | 8 |
| SFP+ Reference Clock | 2 |
| SFP+ Control | 8 |
| SFP+ I2C | 3 |
| EEPROM I2C | 2 |
| PCIe Transceivers | 32 |
| PCIe Reference Clock | 2 |
| PCIe Reset | 1 |
| BPI Flash Data | 16 |
| BPI Flash Address | 23 |
| BPI Flash Control | 5 |
| **Total** | **118** |
