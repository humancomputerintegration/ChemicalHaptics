# Chemical Haptics: Rendering Haptic Sensations via Topical Stimulants

This is the repository for silicone mold 3D Print files, hardware schematics, and code used in the wearable device of "**Chemical Haptics: Rendering Haptic Sensations via Topical Stimulants**" paper (ACM UIST2021). Additionally, we've included the anonymized data from our user study tracking participants' perceived sensations as chemicals were applied and then removed.

## Hardware

Below are the specific components used in our device design, but these can be easily replaced by similar components.

### Electronics

* Microcontroller - Beetle BLE, DFRobot
* Pump Driver - MP6 Driver, ServoFlo
* Thermistors -  NTC Thermistor 10k Bead, DigiKey

### Pumps

* Micropump, MP6, ServoFlo
* (Alternative) Micro Vacuum Pump - [Amazon Link](https://www.amazon.com/Artshu-Vacuum-Negative-Pressure-Cupping/dp/B08JP94FQ7)

### Tubing

* 3mm Outer Diameter Silicone Tubing, [Amazon Link](https://www.amazon.com/Quickun-Silicone-Brewing-Kegerator-Aquaponics/dp/B091T4C1Q8)
* 3mm Inner Diameter Silicone Tubing (good for connectors), [Amazon Link](https://www.amazon.com/Feelers-High-Strength-Silicone-Silicon-Winemaking/dp/B096M2TL23)

## Silicone Mold Design

In this repo we include the STL files of our 3D printed molds that were used to cast the silicone pieces used in our wearable device. The channels in the silicone can be designed in any way and take variable shape. Below you'll find more specific guidelines for using these silicone pieces.

### Central to Peripheral Patch

In the headset design, we demonstrate having a central control unit (with all necessary hardware, reservoirs, and pumps) delivering chemicals to peripheral silicone patches via tubes.

These patches can be adhered to the skin with skin safe tape ([Amazon Link](https://www.amazon.com/Aftercare-Waterproof-Protection-Tape%EF%BC%8CWound-Resistant/dp/B096B464TX/)), but should also be compressed to avoid leakage. Alternatively, bandage wrap ([Amazon Link](https://www.amazon.com/dp/B08YNHSMWZ/))  can be used to wrap around the skin area + silicone patch to apply adequate compression. 

### Self-contained Sleeve

In the sleeve design, cavities are incorporated into the mold for electronics components. Wires/Thermistors can be weaved through silicone or channels can be dedicated for them too. Silicone can be poured over components or tape can cover compartments for wearability. 

Once the full silicone piece is cured, we recommend curing the ends of the sleeve together with additional silicone.

Alternatively, you can cast silicone with velcro on the sleeve edges. This can be used to create sleeves of variable diameters.

## Study 1 Data: How Chemicals Feel



## Citation

When using or building upon this device/work in an academic publication, please consider citing as follows:

Jasmine Lu, Ziwei Liu, Jas Brooks, Pedro Lopes. 2021. Chemical Haptics: Rendering Haptic Sensations via Topical Stimulants. In Proceedings of ACM Symposium on User Interface Software and Technology 2021 (UIST’2021). Association for Computing Machinery, New York, NY, USA. https://doi.org/10.1145/3472749.3474747

## Contact
For questions or if something is wrong with this repository, contact jasminelu@uchicago.edu
