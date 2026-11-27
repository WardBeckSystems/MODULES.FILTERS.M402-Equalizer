# M402 · Filters

Ward-Beck Systems M402, 1968|1. Wiki page: [M402 on WBSps.ca](https://wardbecksystems.github.io/WBSps.ca/PAGES/M402.html)

| Folder | What is in it | Files |
|---|---|---|
| [SCHEMATICS/](SCHEMATICS/) | electrical drawings: schematics, functional diagrams, component layouts, wiring | 41 |
| [MECHANICAL/](MECHANICAL/) | front panels, cover plates, metalwork, assemblies; the front panel as vectors | 16 |
| [PINOUTS/](PINOUTS/) | the RTO-144 connector: connection sheets, connector layouts, rear views | 14 |
| [MANUALS/](MANUALS/) | manuals, manual pages, price lists, brochures, documents | 28 |
| [PHOTOS/](PHOTOS/) | photographs of the module | 2 |
| [SOFTWARE/](SOFTWARE/) | program listings, firmware, the plugin | 0 |
| [KICAD/](KICAD/) | KiCad schematics traced from the drawings, the symbol, PCB projects | 12 |
| [OCR/](OCR/) | the note of every file: date, origin, title block, OCR text | 48 |

<!-- module data: tools/module_specs.py, tools/forum_quotes.py -->

**On the WBSps forum (2006|39 - 2014|47):** [13 topics](FORUM.md): what owners and technicians said about it.

## Specifications

From the technical data sheet: [1968 - M402 - P3.jpg](MANUALS/1968%20-%20M402%20-%20P3.jpg) page 1 (read by OCR; check against the page). As data: [`Specifications.json`](Specifications.json).

| | |
|---|---|
| **Matched gain** | 38db |
| **Frequency response** | to.bdb from 2Ohz to 2OKhz (effects controls at zero position) EQUIVALENT INPUT NOISE -115dbm (1Ohz to 1OOKhz bandwidth) |
| **Harmonic distortion** | Less than 0.5% from 3Ohz to 2OKhz (Measured at +18dbm output level) |
| **Source impedance** | ohms balanced or unbalanced |
| **Input impedance** | ohms +10% |
| **Input level** | -38db nominal, ~2Odb maximum |
| **Load impedance** | hms |
| **Output impedance** | ohms (150 ohms available) +10% |
| **Output level** | +18dbm maximum |
| **Phasing** | The low terminal number of the input pair and the low terminal number of the output pair are in phase. EQUALIZING CHARACTERISTICS In accordance with specified curves within # 0.Sdb |
| **Power requirements** | volts dc, regulated from M848 or equivalent. 65mA |
| **Ambient temperature** | to 60%c |
| **Dimensions** | 1.58W X 6.6251X 6D (depth below panel) inches WEIGHT: 12 lbs Net |

<!-- /module data -->

## Photos

_Photographs of the module itself: front, back, inside, racked._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKTFNPVUxzcEhTN3c/view?resourcekey=0-o3ZxjpK6ARTkMSmnILeRBA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKTFNPVUxzcEhTN3c&resourcekey=0-o3ZxjpK6ARTkMSmnILeRBA" width="240" alt="1968 - M402 - wbs-m402b1.jpg"></a><br><sub>1968|1 · wbs-m402b1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKX29RZi1mTkNXLTQ/view?resourcekey=0-FrtSZzEqXRKm5XopfffwUA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKX29RZi1mTkNXLTQ&resourcekey=0-FrtSZzEqXRKm5XopfffwUA" width="240" alt="1968 - M402 - wbs-m402b2.jpg"></a><br><sub>1968|1 · wbs-m402b2</sub></td></tr>
</table>

## Mechanical

_Mechanical drawings: front panels, cover plates, metalwork and hardware (-03- drawings), AutoCAD files, each with its `(EXTRACTED).svg` vectors; `<module> - front panel.svg` is the front panel as vectors._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKY2todWpjS0RBeDg/view?resourcekey=0-9sm3uCq3qtU2EfXmzdOxDA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKY2todWpjS0RBeDg&resourcekey=0-9sm3uCq3qtU2EfXmzdOxDA" width="240" alt="1968 - M402 - 402-04-005 - QIN BEND RAD UNLESS.jpg"></a><br><sub>1968|1 · 402-04-005 - QIN BEND RAD UNLESS · <a href="MECHANICAL/1968%20-%20M402%20-%20402-04-005%20-%20QIN%20BEND%20RAD%20UNLESS%20(EXTRACTED).svg">vectors</a></sub></td></tr>
</table>

Not on Google Drive yet: `1969 - 402-03-004 - SWITCH MTG BRKT M402A - ISS 4.jpg`, `1971 - 402-03-003 - ESCUTCHEON DRILLING DETAIL - DRN WWH - ISS 7.jpg`, `1971 - 402-04-005 - M402B EQUALIZER MODULE LAYOUT - DRN PHL - ISS 1.jpg`

## Schematics

_Electrical drawings: schematics (-02-), functional diagrams (-01-), component layouts (-06-), wiring (-09-), PCB files (.pcb .dsn), and beside each scan its `(EXTRACTED).svg`: the vectors traced from it._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUUJNd1VmT0hRbHM/view?resourcekey=0-JjK12WqQtgxRXHfk7w1j6w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUUJNd1VmT0hRbHM&resourcekey=0-JjK12WqQtgxRXHfk7w1j6w" width="240" alt="1968 - M402 - 144-06-001 - EATERTAL COMPONENT LAYOUT.jpg"></a><br><sub>1968|1 · 144-06-001 - EATERTAL COMPONENT LAYOUT · <a href="SCHEMATICS/1968%20-%20M402%20-%20144-06-001%20-%20EATERTAL%20COMPONENT%20LAYOUT%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUEx0dUtMVFNnaEU/view?resourcekey=0-q-3R6yqeEsc-FKOHBBLV5Q" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUEx0dUtMVFNnaEU&resourcekey=0-q-3R6yqeEsc-FKOHBBLV5Q" width="240" alt="1968 - M402 - 144-06-002 - BEND RAD UNLESS SPECIFIED.jpg"></a><br><sub>1968|1 · 144-06-002 - BEND RAD UNLESS SPECIFIED · <a href="SCHEMATICS/1968%20-%20M402%20-%20144-06-002%20-%20BEND%20RAD%20UNLESS%20SPECIFIED%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZnVZczJ0elFsLXM/view?resourcekey=0-5kvwbmp-gzDW8vzTS9CWvw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZnVZczJ0elFsLXM&resourcekey=0-5kvwbmp-gzDW8vzTS9CWvw" width="240" alt="1968 - M402 - 402-02-011.jpg"></a><br><sub>1968|1 · 402-02-011 · <a href="SCHEMATICS/1968%20-%20M402%20-%20402-02-011%20(EXTRACTED).svg">vectors</a></sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKS29BdWFHSkVQbHM/view?resourcekey=0-atV2MGk8o2xX1NjjJ2QkaA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKS29BdWFHSkVQbHM&resourcekey=0-atV2MGk8o2xX1NjjJ2QkaA" width="240" alt="1968 - M402 - 402-02-012 - LPE MIN BEND RAD UNESS SPECIFIED.jpg"></a><br><sub>1968|1 · 402-02-012 - LPE MIN BEND RAD UNESS SPECIFIED · <a href="SCHEMATICS/1968%20-%20M402%20-%20402-02-012%20-%20LPE%20MIN%20BEND%20RAD%20UNESS%20SPECIFIED%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYVFOcEx3YU1Dcnc/view?resourcekey=0-xrEwC0qKLczr2y5kVEKZiA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYVFOcEx3YU1Dcnc&resourcekey=0-xrEwC0qKLczr2y5kVEKZiA" width="240" alt="1968 - M402 - 402-02-013.jpg"></a><br><sub>1968|1 · 402-02-013 · <a href="SCHEMATICS/1968%20-%20M402%20-%20402-02-013%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKRVRIQnp1YVczTEk/view?resourcekey=0-ThNzUJ4R6zi7rUoyy9U6Uw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKRVRIQnp1YVczTEk&resourcekey=0-ThNzUJ4R6zi7rUoyy9U6Uw" width="240" alt="1968 - M402 - 402-09-001 - BEND RAD UNLESS SPECIFIED.jpg"></a><br><sub>1968|1 · 402-09-001 - BEND RAD UNLESS SPECIFIED · <a href="SCHEMATICS/1968%20-%20M402%20-%20402-09-001%20-%20BEND%20RAD%20UNLESS%20SPECIFIED%20(EXTRACTED).svg">vectors</a></sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKNmx6XzNUR0hLaFk/view?resourcekey=0-agia0saIgC8Xea4Kbniy7g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKNmx6XzNUR0hLaFk&resourcekey=0-agia0saIgC8Xea4Kbniy7g" width="240" alt="1968 - M402 - B 1-139-02-001 - M402B - EQUALIZER MODULE - PCB SCHEMATIC.gif"></a><br><sub>1968|1 · B 1-139-02-001 - M402B - EQUALIZER MODULE - PCB SCHEMATIC</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/1ustH1vIf6AUUoqD5XPZHndNQFIPzxDFX/view" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=1ustH1vIf6AUUoqD5XPZHndNQFIPzxDFX" width="240" alt="1971 - 402-02-013 - M402B EQUALIZER MODULE SCHEMATIC - DRN PHIL - ISS 7.jpg"></a><br><sub>1971|4 · 402-02-013 - M402B EQUALIZER MODULE SCHEMATIC - DRN PHIL - ISS 7 · <a href="SCHEMATICS/1971%20-%20402-02-013%20-%20M402B%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20DRN%20PHIL%20-%20ISS%207%20(EXTRACTED).svg">vectors</a></sub></td></tr>
</table>

Not on Google Drive yet: `1970 - 402-02-012 - M402A AND M404A SYSTEM WIRING - DRN DJG - ISS 2.jpg`, `1970 - 402-02-012 - M402A(B) & M404A SYSTEM WIRING - DRN DJG - ISS 5.jpg`, `1971 - 402-02-013 - M402B EQUALIZER MODULE SCHEMATIC - DRN PHL - ISS 4.jpg`

## Pinouts

_Pinouts: the RTO-144 edge connector (connection sheets, connector layouts and rear views, strapping), and the pinout / connections drawings made from them. The module root `RTO.json` lists every contact._

Not on Google Drive yet: `1968 - 402-09-001 - & 404 EQUALIZER PLUG CONNECTIONS - DRN C.S. O'CONNELL - ISS 2.jpg`, `1968 - 402-09-001 - & 404 EQUALIZER PLUG CONNECTIONS - DRN C.S. O'CONNELL.jpg`, `1970 - 402-02-011 - M402A AND M404A EQUALIZER PLUG CONNECTIONS - DRN DJG - ISS 3.jpg`

## RTO-144 pinout

22 contacts. Read from the module's own documents (no RTO-144 sheet yet). Every contact, with where it was read: [`RTO.json`](RTO.json).

| Pin | Signal | Kind | Pair | Confidence |
|---|---|---|---|---|
| 5 | EQ IN LEFT | in | A1 + | variant |
| 6 | EQ IN RIGHT | in | A3 - | variant |
| 8 | EQ IN LEFT | in | A1 - | variant |
| 13 | EQ OUT LEFT | out | A2 + | variant |
| 14 | EQ OUT LEFT | out | A2 - | variant |
| 18 | COMMON | ground |  | variant |
| 19 | COMMON | ground |  | variant |
| 20 | +24 V | power |  | variant |
| 22 | +48 V | power |  | variant |

## Manuals and documents

_Manuals and manual pages, price lists, RTO-144 connection sheets, brochures, ads and other document scans._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKLTFoLTk1SDNPTDA/view?resourcekey=0-uDm5KmNOwfoyc-H32WT26A" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKLTFoLTk1SDNPTDA&resourcekey=0-uDm5KmNOwfoyc-H32WT26A" width="240" alt="1968 - M402 - 402bswitchschematic_assembled.gif"></a><br><sub>1968|1 · 402bswitchschematic_assembled</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZjl2NXBwVGZNNmM/view?resourcekey=0-5BxH2T2cH9VGC6Z0nPyzQQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZjl2NXBwVGZNNmM&resourcekey=0-5BxH2T2cH9VGC6Z0nPyzQQ" width="240" alt="1968 - M402 - P1.jpg"></a><br><sub>1968|1 · P1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKb3prU2pzbERKY2c/view?resourcekey=0-FPddxHgeIn2ylqttsfth2g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKb3prU2pzbERKY2c&resourcekey=0-FPddxHgeIn2ylqttsfth2g" width="240" alt="1968 - M402 - P10.jpg"></a><br><sub>1968|1 · P10</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKbFFUVnBlYVhWVGM/view?resourcekey=0-G4uI0MslCCewTtxHA_o_gw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKbFFUVnBlYVhWVGM&resourcekey=0-G4uI0MslCCewTtxHA_o_gw" width="240" alt="1968 - M402 - P11.jpg"></a><br><sub>1968|1 · P11</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYmo5RDdqU1p5OTQ/view?resourcekey=0-A5UEp9QFLoV6rMuLvCrfwQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYmo5RDdqU1p5OTQ&resourcekey=0-A5UEp9QFLoV6rMuLvCrfwQ" width="240" alt="1968 - M402 - P12.jpg"></a><br><sub>1968|1 · P12</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKaGhRcHNDMTctRWc/view?resourcekey=0-BDqCb1eVER9_Dghy3R5f4w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKaGhRcHNDMTctRWc&resourcekey=0-BDqCb1eVER9_Dghy3R5f4w" width="240" alt="1968 - M402 - P13.jpg"></a><br><sub>1968|1 · P13</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKRFlsbkJ0SUZKNGs/view?resourcekey=0-9eXXArhwIO_9mVok3SF_3g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKRFlsbkJ0SUZKNGs&resourcekey=0-9eXXArhwIO_9mVok3SF_3g" width="240" alt="1968 - M402 - P14.jpg"></a><br><sub>1968|1 · P14</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUlcxTk9qOEh1RVU/view?resourcekey=0-T8Zq63Lor7gY1uiBZPTbZg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUlcxTk9qOEh1RVU&resourcekey=0-T8Zq63Lor7gY1uiBZPTbZg" width="240" alt="1968 - M402 - P15.jpg"></a><br><sub>1968|1 · P15</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKeHJ5dmFrNGxHNkU/view?resourcekey=0-R2GJ3ShPIWiSM68vhGs1HQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKeHJ5dmFrNGxHNkU&resourcekey=0-R2GJ3ShPIWiSM68vhGs1HQ" width="240" alt="1968 - M402 - P16.jpg"></a><br><sub>1968|1 · P16</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKMkkwSU5NWDc5LW8/view?resourcekey=0-gg3kqyv0KzTC6SsTkSqAhA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKMkkwSU5NWDc5LW8&resourcekey=0-gg3kqyv0KzTC6SsTkSqAhA" width="240" alt="1968 - M402 - P17.jpg"></a><br><sub>1968|1 · P17</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKb1BqYnJudGVmVUE/view?resourcekey=0-Oa3dxO_pEzWK3983Xis9-Q" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKb1BqYnJudGVmVUE&resourcekey=0-Oa3dxO_pEzWK3983Xis9-Q" width="240" alt="1968 - M402 - P18.jpg"></a><br><sub>1968|1 · P18</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZDI4cVNQcWIzWVE/view?resourcekey=0-TuC77AWGVKasMqDHQzb23w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZDI4cVNQcWIzWVE&resourcekey=0-TuC77AWGVKasMqDHQzb23w" width="240" alt="1968 - M402 - P19.jpg"></a><br><sub>1968|1 · P19</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKWkRaV0RxODBrNVk/view?resourcekey=0-hCxB0wYcLe6GIntgaqtv0Q" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKWkRaV0RxODBrNVk&resourcekey=0-hCxB0wYcLe6GIntgaqtv0Q" width="240" alt="1968 - M402 - P2.jpg"></a><br><sub>1968|1 · P2</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKQm5zeWxMQzZKUE0/view?resourcekey=0-UnO03hbgk8mMEvYPDLK4ow" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKQm5zeWxMQzZKUE0&resourcekey=0-UnO03hbgk8mMEvYPDLK4ow" width="240" alt="1968 - M402 - P20.jpg"></a><br><sub>1968|1 · P20</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKczBTZlJkWV8teHM/view?resourcekey=0-ylfBF39tJx5D0nkbzIJa4g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKczBTZlJkWV8teHM&resourcekey=0-ylfBF39tJx5D0nkbzIJa4g" width="240" alt="1968 - M402 - P21.jpg"></a><br><sub>1968|1 · P21</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKeXJEOVQ4Q0xvWkE/view?resourcekey=0-16uQYus_ZX0WsxKYT1RDiA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKeXJEOVQ4Q0xvWkE&resourcekey=0-16uQYus_ZX0WsxKYT1RDiA" width="240" alt="1968 - M402 - P22.jpg"></a><br><sub>1968|1 · P22</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKaDVpb1d2bGJRcmc/view?resourcekey=0-CpXKdGrO8i-YtIBqC6xQ9g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKaDVpb1d2bGJRcmc&resourcekey=0-CpXKdGrO8i-YtIBqC6xQ9g" width="240" alt="1968 - M402 - P23.jpg"></a><br><sub>1968|1 · P23</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKM3EyWnR3ZDc1S28/view?resourcekey=0-ABQp-cmBIl0ssdUjemb-ZQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKM3EyWnR3ZDc1S28&resourcekey=0-ABQp-cmBIl0ssdUjemb-ZQ" width="240" alt="1968 - M402 - P24.jpg"></a><br><sub>1968|1 · P24</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUmktTTR6LURzbDQ/view?resourcekey=0-ahT6jHYG7oe3dmDkjHlxPQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUmktTTR6LURzbDQ&resourcekey=0-ahT6jHYG7oe3dmDkjHlxPQ" width="240" alt="1968 - M402 - P25.jpg"></a><br><sub>1968|1 · P25</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKM1NMVXMxdml3Ym8/view?resourcekey=0-_A0GcsE1GiZ9wXRJQV-V1w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKM1NMVXMxdml3Ym8&resourcekey=0-_A0GcsE1GiZ9wXRJQV-V1w" width="240" alt="1968 - M402 - P26.jpg"></a><br><sub>1968|1 · P26</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKVUpua29yS3BFYmc/view?resourcekey=0-LwzaCUQBodxYOhciPlMr2Q" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKVUpua29yS3BFYmc&resourcekey=0-LwzaCUQBodxYOhciPlMr2Q" width="240" alt="1968 - M402 - P3.jpg"></a><br><sub>1968|1 · P3</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKNjJfT3A3OHF1b3M/view?resourcekey=0-cwFpk2btfL69gFiNPwbC0Q" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKNjJfT3A3OHF1b3M&resourcekey=0-cwFpk2btfL69gFiNPwbC0Q" width="240" alt="1968 - M402 - P4.jpg"></a><br><sub>1968|1 · P4</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKSmQxM2M3SmpTaXc/view?resourcekey=0-0-JKhYOK8HGWuAh-CjrV8g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKSmQxM2M3SmpTaXc&resourcekey=0-0-JKhYOK8HGWuAh-CjrV8g" width="240" alt="1968 - M402 - P5.jpg"></a><br><sub>1968|1 · P5</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKM3ZDYTdXQTlNTjQ/view?resourcekey=0-2wWPC6ef0ksHScbBhX2Ocg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKM3ZDYTdXQTlNTjQ&resourcekey=0-2wWPC6ef0ksHScbBhX2Ocg" width="240" alt="1968 - M402 - P6.jpg"></a><br><sub>1968|1 · P6</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKSXVEV19wdnhlS28/view?resourcekey=0-xnvbXGqOSqyRnEAvOKPJ2A" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKSXVEV19wdnhlS28&resourcekey=0-xnvbXGqOSqyRnEAvOKPJ2A" width="240" alt="1968 - M402 - P7.jpg"></a><br><sub>1968|1 · P7</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYVdZUk83djRqa00/view?resourcekey=0-BxSwz6BnkWCJwQMrICgG9w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYVdZUk83djRqa00&resourcekey=0-BxSwz6BnkWCJwQMrICgG9w" width="240" alt="1968 - M402 - P8.jpg"></a><br><sub>1968|1 · P8</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKVkxHRzVXMXRtOVE/view?resourcekey=0-upRQPQpr0XPoodyILdIzsQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKVkxHRzVXMXRtOVE&resourcekey=0-upRQPQpr0XPoodyILdIzsQ" width="240" alt="1968 - M402 - P9.jpg"></a><br><sub>1968|1 · P9</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B9I0nu1MPkm6eGl5c2lYdWFuZ0k/view?resourcekey=0-U_28fKTB-7qkOBBzskUU6w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B9I0nu1MPkm6eGl5c2lYdWFuZ0k&resourcekey=0-U_28fKTB-7qkOBBzskUU6w" width="240" alt="19xx - M402 - AD - 20170522_122029_020.jpg"></a><br><sub>19xx - M402 - AD - 20170522_122029_020</sub></td></tr>
</table>

## KiCad

_KiCad: a schematic (`.kicad_sch`) traced from each electrical drawing, the module symbol (`.kicad_sym`) and its PCB projects. Traced schematics are the line work only: redraw with symbols over them._

- [1968 - 402-09-001 - &amp; 404 EQUALIZER PLUG CONNECTIONS - DRN C.S. O'CONNELL - ISS 2.kicad_sch](KICAD/1968%20-%20402-09-001%20-%20%26%20404%20EQUALIZER%20PLUG%20CONNECTIONS%20-%20DRN%20C.S.%20O%27CONNELL%20-%20ISS%202.kicad_sch)
- [1968 - 402-09-001 - &amp; 404 EQUALIZER PLUG CONNECTIONS - DRN C.S. O'CONNELL.kicad_sch](KICAD/1968%20-%20402-09-001%20-%20%26%20404%20EQUALIZER%20PLUG%20CONNECTIONS%20-%20DRN%20C.S.%20O%27CONNELL.kicad_sch)
- [1968 - M402 - 402-02-011.kicad_sch](KICAD/1968%20-%20M402%20-%20402-02-011.kicad_sch)
- [1968 - M402 - 402-02-012 - LPE MIN BEND RAD UNESS SPECIFIED.kicad_sch](KICAD/1968%20-%20M402%20-%20402-02-012%20-%20LPE%20MIN%20BEND%20RAD%20UNESS%20SPECIFIED.kicad_sch)
- [1968 - M402 - 402-02-013.kicad_sch](KICAD/1968%20-%20M402%20-%20402-02-013.kicad_sch)
- [1968 - M402 - 402-09-001 - BEND RAD UNLESS SPECIFIED.kicad_sch](KICAD/1968%20-%20M402%20-%20402-09-001%20-%20BEND%20RAD%20UNLESS%20SPECIFIED.kicad_sch)
- [1970 - 402-02-011 - M402A AND M404A EQUALIZER PLUG CONNECTIONS - DRN DJG - ISS 3.kicad_sch](KICAD/1970%20-%20402-02-011%20-%20M402A%20AND%20M404A%20EQUALIZER%20PLUG%20CONNECTIONS%20-%20DRN%20DJG%20-%20ISS%203.kicad_sch)
- [1970 - 402-02-012 - M402A AND M404A SYSTEM WIRING - DRN DJG - ISS 2.kicad_sch](KICAD/1970%20-%20402-02-012%20-%20M402A%20AND%20M404A%20SYSTEM%20WIRING%20-%20DRN%20DJG%20-%20ISS%202.kicad_sch)
- [1970 - 402-02-012 - M402A(B) &amp; M404A SYSTEM WIRING - DRN DJG - ISS 5.kicad_sch](KICAD/1970%20-%20402-02-012%20-%20M402A(B)%20%26%20M404A%20SYSTEM%20WIRING%20-%20DRN%20DJG%20-%20ISS%205.kicad_sch)
- [1971 - 402-02-013 - M402B EQUALIZER MODULE SCHEMATIC - DRN PHIL - ISS 7.kicad_sch](KICAD/1971%20-%20402-02-013%20-%20M402B%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20DRN%20PHIL%20-%20ISS%207.kicad_sch)
- [1971 - 402-02-013 - M402B EQUALIZER MODULE SCHEMATIC - DRN PHL - ISS 4.kicad_sch](KICAD/1971%20-%20402-02-013%20-%20M402B%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20DRN%20PHL%20-%20ISS%204.kicad_sch)
- [M402.kicad_sym](KICAD/M402.kicad_sym)

---
Archive: Anthony Peter Kuzub · [WBSps.ca](https://WBSps.ca) · [WBSps.Kuzub.com](https://WBSps.Kuzub.com)
