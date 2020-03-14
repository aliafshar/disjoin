EESchema Schematic File Version 4
LIBS:chordboard-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Chordboard config pad"
Date ""
Rev "1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L chordboard-components:GROVE_I2C J1
U 1 1 5CC17C95
P 3900 1350
F 0 "J1" H 4227 1401 50  0000 L CNN
F 1 "T_I2C0" H 4227 1310 50  0000 L CNN
F 2 "Connector_JST:JST_PH_B4B-PH-K_1x04_P2.00mm_Vertical" H 3900 1350 50  0001 C CNN
F 3 "" H 3900 1350 50  0001 C CNN
	1    3900 1350
	1    0    0    -1  
$EndComp
Text Label 3700 1500 2    50   ~ 0
T_GND
Text Label 3700 1400 2    50   ~ 0
T_3V3
Text Label 3700 1200 2    50   ~ 0
T_SCL
Text Label 3700 1300 2    50   ~ 0
T_SDA
$Comp
L Mechanical:MountingHole H4
U 1 1 5D133AA3
P 10500 1300
F 0 "H4" H 10600 1346 50  0000 L CNN
F 1 "MountingHole" H 10600 1255 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_Pad_Via" H 10500 1300 50  0001 C CNN
F 3 "~" H 10500 1300 50  0001 C CNN
	1    10500 1300
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H3
U 1 1 5D133AAA
P 10500 1100
F 0 "H3" H 10600 1146 50  0000 L CNN
F 1 "MountingHole" H 10600 1055 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_Pad_Via" H 10500 1100 50  0001 C CNN
F 3 "~" H 10500 1100 50  0001 C CNN
	1    10500 1100
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H2
U 1 1 5D133AB1
P 10500 900
F 0 "H2" H 10600 946 50  0000 L CNN
F 1 "MountingHole" H 10600 855 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_Pad_Via" H 10500 900 50  0001 C CNN
F 3 "~" H 10500 900 50  0001 C CNN
	1    10500 900 
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole H1
U 1 1 5D133AB8
P 10500 700
F 0 "H1" H 10600 746 50  0000 L CNN
F 1 "MountingHole" H 10600 655 50  0000 L CNN
F 2 "MountingHole:MountingHole_2.7mm_M2.5_Pad_Via" H 10500 700 50  0001 C CNN
F 3 "~" H 10500 700 50  0001 C CNN
	1    10500 700 
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE1
U 1 1 603EFEE7
P 9050 3150
F 0 "RE1" H 9279 3196 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 3105 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 3310 50  0001 C CNN
F 3 "~" H 9050 3410 50  0001 C CNN
	1    9050 3150
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE2
U 1 1 5C57B090
P 9050 3550
F 0 "RE2" H 9279 3596 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 3505 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 3710 50  0001 C CNN
F 3 "~" H 9050 3810 50  0001 C CNN
	1    9050 3550
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE3
U 1 1 5C57B1A0
P 9050 3950
F 0 "RE3" H 9279 3996 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 3905 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 4110 50  0001 C CNN
F 3 "~" H 9050 4210 50  0001 C CNN
	1    9050 3950
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE4
U 1 1 5C57B2B8
P 9050 4350
F 0 "RE4" H 9279 4396 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 4305 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 4510 50  0001 C CNN
F 3 "~" H 9050 4610 50  0001 C CNN
	1    9050 4350
	1    0    0    -1  
$EndComp
Text Label 8750 3150 2    50   ~ 0
T_GND
Text Label 6400 3850 2    50   ~ 0
T_SCL
Text Label 6400 3750 2    50   ~ 0
T_SDA
Text Label 7100 3450 0    50   ~ 0
T_3V3
Text Label 7100 5650 0    50   ~ 0
T_GND
Text Label 6400 4650 2    50   ~ 0
T_3V3
Text Label 6850 3450 2    50   ~ 0
T_GND
Wire Wire Line
	7100 3250 7100 3450
Text Label 6400 5350 2    50   ~ 0
T_GND
$Comp
L Device:C_Small C1
U 1 1 5C57BC6E
P 6850 3350
F 0 "C1" H 6942 3396 50  0000 L CNN
F 1 "C" H 6942 3305 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 6850 3350 50  0001 C CNN
F 3 "~" H 6850 3350 50  0001 C CNN
	1    6850 3350
	1    0    0    -1  
$EndComp
Text Label 8750 3550 2    50   ~ 0
T_GND
Text Label 8750 3950 2    50   ~ 0
T_GND
Text Label 8750 4350 2    50   ~ 0
T_GND
$Comp
L Device:Rotary_Encoder RE5
U 1 1 5CBC5B63
P 9050 4750
F 0 "RE5" H 9279 4796 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 4705 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 4910 50  0001 C CNN
F 3 "~" H 9050 5010 50  0001 C CNN
	1    9050 4750
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE6
U 1 1 5CBC5B69
P 9050 5150
F 0 "RE6" H 9279 5196 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 5105 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 5310 50  0001 C CNN
F 3 "~" H 9050 5410 50  0001 C CNN
	1    9050 5150
	1    0    0    -1  
$EndComp
Text Label 8750 4750 2    50   ~ 0
T_GND
Text Label 8750 5150 2    50   ~ 0
T_GND
$Comp
L Device:Rotary_Encoder RE7
U 1 1 5D28A9BA
P 9050 5550
F 0 "RE7" H 9279 5596 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 5505 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 5710 50  0001 C CNN
F 3 "~" H 9050 5810 50  0001 C CNN
	1    9050 5550
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE8
U 1 1 5D28A9C0
P 9050 5950
F 0 "RE8" H 9279 5996 50  0000 L CNN
F 1 "Rotary_Encoder" H 9279 5905 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 8900 6110 50  0001 C CNN
F 3 "~" H 9050 6210 50  0001 C CNN
	1    9050 5950
	1    0    0    -1  
$EndComp
Text Label 8750 5550 2    50   ~ 0
T_GND
Text Label 8750 5950 2    50   ~ 0
T_GND
$Comp
L Interface_Expansion:MCP23017_SO IO1
U 1 1 5C57BC68
P 7100 4550
F 0 "IO1" H 6650 5500 50  0000 C CNN
F 1 "MCP23017_SO" H 6950 4950 50  0000 C CNN
F 2 "Package_SO:SOIC-28W_7.5x17.9mm_P1.27mm" H 7300 3550 50  0001 L CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001952C.pdf" H 7300 3450 50  0001 L CNN
	1    7100 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	7800 4450 8750 4450
Wire Wire Line
	7800 4650 8750 4650
Wire Wire Line
	8450 4350 8450 4250
Wire Wire Line
	8450 4250 8750 4250
Wire Wire Line
	7800 4350 8450 4350
Wire Wire Line
	8450 4750 8450 4850
Wire Wire Line
	8450 4850 8750 4850
Wire Wire Line
	7800 4750 8450 4750
Wire Wire Line
	8350 4250 8350 4050
Wire Wire Line
	8350 4050 8750 4050
Wire Wire Line
	7800 4250 8350 4250
Wire Wire Line
	8250 4150 8250 3850
Wire Wire Line
	8250 3850 8750 3850
Wire Wire Line
	7800 4150 8250 4150
Wire Wire Line
	8150 4050 8150 3650
Wire Wire Line
	8150 3650 8750 3650
Wire Wire Line
	7800 4050 8150 4050
Wire Wire Line
	8050 3950 8050 3450
Wire Wire Line
	8050 3450 8750 3450
Wire Wire Line
	7800 3950 8050 3950
Wire Wire Line
	7950 3850 7950 3250
Wire Wire Line
	7950 3250 8750 3250
Wire Wire Line
	7800 3850 7950 3850
Wire Wire Line
	7850 3750 7850 3050
Wire Wire Line
	7850 3050 8750 3050
Wire Wire Line
	7800 3750 7850 3750
Wire Wire Line
	8350 4850 8350 5050
Wire Wire Line
	8350 5050 8750 5050
Wire Wire Line
	7800 4850 8350 4850
Wire Wire Line
	8250 4950 8250 5250
Wire Wire Line
	8250 5250 8750 5250
Wire Wire Line
	7800 4950 8250 4950
Wire Wire Line
	8150 5050 8150 5450
Wire Wire Line
	8150 5450 8750 5450
Wire Wire Line
	7800 5050 8150 5050
Wire Wire Line
	8050 5150 8050 5650
Wire Wire Line
	8050 5650 8750 5650
Wire Wire Line
	7800 5150 8050 5150
Wire Wire Line
	7950 5250 7950 5850
Wire Wire Line
	7950 5850 8750 5850
Wire Wire Line
	7800 5250 7950 5250
Wire Wire Line
	7850 5350 7850 6050
Wire Wire Line
	7850 6050 8750 6050
Wire Wire Line
	7800 5350 7850 5350
Wire Wire Line
	7100 3250 6850 3250
$Comp
L chordboard-components:GROVE_I2C J2
U 1 1 5C839B41
P 3900 1900
F 0 "J2" H 4227 1951 50  0000 L CNN
F 1 "T_I2C0" H 4227 1860 50  0000 L CNN
F 2 "Connector_JST:JST_PH_B4B-PH-K_1x04_P2.00mm_Vertical" H 3900 1900 50  0001 C CNN
F 3 "" H 3900 1900 50  0001 C CNN
	1    3900 1900
	1    0    0    -1  
$EndComp
Text Label 3700 2050 2    50   ~ 0
T_GND
Text Label 3700 1950 2    50   ~ 0
T_3V3
Text Label 3700 1750 2    50   ~ 0
T_SCL
Text Label 3700 1850 2    50   ~ 0
T_SDA
$Comp
L Device:C_Small C2
U 1 1 5C83CF4C
P 10050 3200
F 0 "C2" H 10142 3246 50  0000 L CNN
F 1 "C" H 10142 3155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 3200 50  0001 C CNN
F 3 "~" H 10050 3200 50  0001 C CNN
	1    10050 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C10
U 1 1 5C83CFD8
P 10250 3200
F 0 "C10" H 10342 3246 50  0000 L CNN
F 1 "C" H 10342 3155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 3200 50  0001 C CNN
F 3 "~" H 10250 3200 50  0001 C CNN
	1    10250 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 3250 9900 3250
Wire Wire Line
	9900 3250 9900 3100
Wire Wire Line
	9900 3100 10050 3100
Connection ~ 8750 3250
Wire Wire Line
	8750 3050 10250 3050
Wire Wire Line
	10250 3050 10250 3100
Connection ~ 8750 3050
Wire Wire Line
	10050 3300 10250 3300
Connection ~ 10250 3300
Wire Wire Line
	10250 3300 10400 3300
Text Label 10400 3300 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C3
U 1 1 5C8412BC
P 10050 3600
F 0 "C3" H 10142 3646 50  0000 L CNN
F 1 "C" H 10142 3555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 3600 50  0001 C CNN
F 3 "~" H 10050 3600 50  0001 C CNN
	1    10050 3600
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C11
U 1 1 5C8412C3
P 10250 3600
F 0 "C11" H 10342 3646 50  0000 L CNN
F 1 "C" H 10342 3555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 3600 50  0001 C CNN
F 3 "~" H 10250 3600 50  0001 C CNN
	1    10250 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 3650 9900 3650
Wire Wire Line
	9900 3650 9900 3500
Wire Wire Line
	9900 3500 10050 3500
Wire Wire Line
	8750 3450 10250 3450
Wire Wire Line
	10250 3450 10250 3500
Wire Wire Line
	10050 3700 10250 3700
Connection ~ 10250 3700
Wire Wire Line
	10250 3700 10400 3700
Text Label 10400 3700 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C4
U 1 1 5C842396
P 10050 4000
F 0 "C4" H 10142 4046 50  0000 L CNN
F 1 "C" H 10142 3955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 4000 50  0001 C CNN
F 3 "~" H 10050 4000 50  0001 C CNN
	1    10050 4000
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C12
U 1 1 5C84239D
P 10250 4000
F 0 "C12" H 10342 4046 50  0000 L CNN
F 1 "C" H 10342 3955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 4000 50  0001 C CNN
F 3 "~" H 10250 4000 50  0001 C CNN
	1    10250 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 4050 9900 4050
Wire Wire Line
	9900 4050 9900 3900
Wire Wire Line
	9900 3900 10050 3900
Wire Wire Line
	8750 3850 10250 3850
Wire Wire Line
	10250 3850 10250 3900
Wire Wire Line
	10050 4100 10250 4100
Connection ~ 10250 4100
Wire Wire Line
	10250 4100 10400 4100
Text Label 10400 4100 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C5
U 1 1 5C84374D
P 10050 4400
F 0 "C5" H 10142 4446 50  0000 L CNN
F 1 "C" H 10142 4355 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 4400 50  0001 C CNN
F 3 "~" H 10050 4400 50  0001 C CNN
	1    10050 4400
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C13
U 1 1 5C843754
P 10250 4400
F 0 "C13" H 10342 4446 50  0000 L CNN
F 1 "C" H 10342 4355 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 4400 50  0001 C CNN
F 3 "~" H 10250 4400 50  0001 C CNN
	1    10250 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 4450 9900 4450
Wire Wire Line
	9900 4450 9900 4300
Wire Wire Line
	9900 4300 10050 4300
Wire Wire Line
	8750 4250 10250 4250
Wire Wire Line
	10250 4250 10250 4300
Wire Wire Line
	10050 4500 10250 4500
Connection ~ 10250 4500
Wire Wire Line
	10250 4500 10400 4500
Text Label 10400 4500 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C6
U 1 1 5C844EA2
P 10050 4800
F 0 "C6" H 10142 4846 50  0000 L CNN
F 1 "C" H 10142 4755 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 4800 50  0001 C CNN
F 3 "~" H 10050 4800 50  0001 C CNN
	1    10050 4800
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C14
U 1 1 5C844EA9
P 10250 4800
F 0 "C14" H 10342 4846 50  0000 L CNN
F 1 "C" H 10342 4755 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 4800 50  0001 C CNN
F 3 "~" H 10250 4800 50  0001 C CNN
	1    10250 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 4850 9900 4850
Wire Wire Line
	9900 4850 9900 4700
Wire Wire Line
	9900 4700 10050 4700
Wire Wire Line
	8750 4650 10250 4650
Wire Wire Line
	10250 4650 10250 4700
Wire Wire Line
	10050 4900 10250 4900
Connection ~ 10250 4900
Wire Wire Line
	10250 4900 10400 4900
Text Label 10400 4900 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C7
U 1 1 5C846B3A
P 10050 5200
F 0 "C7" H 10142 5246 50  0000 L CNN
F 1 "C" H 10142 5155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 5200 50  0001 C CNN
F 3 "~" H 10050 5200 50  0001 C CNN
	1    10050 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C15
U 1 1 5C846B41
P 10250 5200
F 0 "C15" H 10342 5246 50  0000 L CNN
F 1 "C" H 10342 5155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 5200 50  0001 C CNN
F 3 "~" H 10250 5200 50  0001 C CNN
	1    10250 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 5250 9900 5250
Wire Wire Line
	9900 5250 9900 5100
Wire Wire Line
	9900 5100 10050 5100
Wire Wire Line
	8750 5050 10250 5050
Wire Wire Line
	10250 5050 10250 5100
Wire Wire Line
	10050 5300 10250 5300
Connection ~ 10250 5300
Wire Wire Line
	10250 5300 10400 5300
Text Label 10400 5300 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C8
U 1 1 5C848B5E
P 10050 5600
F 0 "C8" H 10142 5646 50  0000 L CNN
F 1 "C" H 10142 5555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 5600 50  0001 C CNN
F 3 "~" H 10050 5600 50  0001 C CNN
	1    10050 5600
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C16
U 1 1 5C848B65
P 10250 5600
F 0 "C16" H 10342 5646 50  0000 L CNN
F 1 "C" H 10342 5555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 5600 50  0001 C CNN
F 3 "~" H 10250 5600 50  0001 C CNN
	1    10250 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 5650 9900 5650
Wire Wire Line
	9900 5650 9900 5500
Wire Wire Line
	9900 5500 10050 5500
Wire Wire Line
	8750 5450 10250 5450
Wire Wire Line
	10250 5450 10250 5500
Wire Wire Line
	10050 5700 10250 5700
Connection ~ 10250 5700
Wire Wire Line
	10250 5700 10400 5700
Text Label 10400 5700 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C9
U 1 1 5C84B0B3
P 10050 6000
F 0 "C9" H 10142 6046 50  0000 L CNN
F 1 "C" H 10142 5955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10050 6000 50  0001 C CNN
F 3 "~" H 10050 6000 50  0001 C CNN
	1    10050 6000
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C17
U 1 1 5C84B0BA
P 10250 6000
F 0 "C17" H 10342 6046 50  0000 L CNN
F 1 "C" H 10342 5955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 10250 6000 50  0001 C CNN
F 3 "~" H 10250 6000 50  0001 C CNN
	1    10250 6000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8750 6050 9900 6050
Wire Wire Line
	9900 6050 9900 5900
Wire Wire Line
	9900 5900 10050 5900
Wire Wire Line
	8750 5850 10250 5850
Wire Wire Line
	10250 5850 10250 5900
Wire Wire Line
	10050 6100 10250 6100
Connection ~ 10250 6100
Wire Wire Line
	10250 6100 10400 6100
Text Label 10400 6100 0    50   ~ 0
T_GND
Connection ~ 8750 6050
Connection ~ 8750 5850
Connection ~ 8750 5650
Connection ~ 8750 5450
Connection ~ 8750 5250
Connection ~ 8750 5050
Connection ~ 8750 4850
Connection ~ 8750 4650
Connection ~ 8750 4450
Connection ~ 8750 4250
Connection ~ 8750 4050
Connection ~ 8750 3850
Connection ~ 8750 3650
Connection ~ 8750 3450
$Comp
L Device:Rotary_Encoder RE9
U 1 1 5C84EC3B
P 3900 3150
F 0 "RE9" H 4129 3196 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 3105 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 3310 50  0001 C CNN
F 3 "~" H 3900 3410 50  0001 C CNN
	1    3900 3150
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE10
U 1 1 5C84EC41
P 3900 3550
F 0 "RE10" H 4129 3596 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 3505 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 3710 50  0001 C CNN
F 3 "~" H 3900 3810 50  0001 C CNN
	1    3900 3550
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE11
U 1 1 5C84EC47
P 3900 3950
F 0 "RE11" H 4129 3996 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 3905 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 4110 50  0001 C CNN
F 3 "~" H 3900 4210 50  0001 C CNN
	1    3900 3950
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE12
U 1 1 5C84EC4D
P 3900 4350
F 0 "RE12" H 4129 4396 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 4305 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 4510 50  0001 C CNN
F 3 "~" H 3900 4610 50  0001 C CNN
	1    3900 4350
	1    0    0    -1  
$EndComp
Text Label 3600 3150 2    50   ~ 0
T_GND
Text Label 1250 3850 2    50   ~ 0
T_SCL
Text Label 1250 3750 2    50   ~ 0
T_SDA
Text Label 1950 3450 0    50   ~ 0
T_3V3
Text Label 1950 5650 0    50   ~ 0
T_GND
Text Label 1250 4650 2    50   ~ 0
T_3V3
Text Label 1700 3450 2    50   ~ 0
T_GND
Wire Wire Line
	1950 3250 1950 3450
$Comp
L Device:C_Small C18
U 1 1 5C84EC5C
P 1700 3350
F 0 "C18" H 1792 3396 50  0000 L CNN
F 1 "C" H 1792 3305 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 1700 3350 50  0001 C CNN
F 3 "~" H 1700 3350 50  0001 C CNN
	1    1700 3350
	1    0    0    -1  
$EndComp
Text Label 3600 3550 2    50   ~ 0
T_GND
Text Label 3600 3950 2    50   ~ 0
T_GND
Text Label 3600 4350 2    50   ~ 0
T_GND
$Comp
L Device:Rotary_Encoder RE13
U 1 1 5C84EC65
P 3900 4750
F 0 "RE13" H 4129 4796 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 4705 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 4910 50  0001 C CNN
F 3 "~" H 3900 5010 50  0001 C CNN
	1    3900 4750
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE14
U 1 1 5C84EC6B
P 3900 5150
F 0 "RE14" H 4129 5196 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 5105 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 5310 50  0001 C CNN
F 3 "~" H 3900 5410 50  0001 C CNN
	1    3900 5150
	1    0    0    -1  
$EndComp
Text Label 3600 4750 2    50   ~ 0
T_GND
Text Label 3600 5150 2    50   ~ 0
T_GND
$Comp
L Device:Rotary_Encoder RE15
U 1 1 5C84EC73
P 3900 5550
F 0 "RE15" H 4129 5596 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 5505 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 5710 50  0001 C CNN
F 3 "~" H 3900 5810 50  0001 C CNN
	1    3900 5550
	1    0    0    -1  
$EndComp
$Comp
L Device:Rotary_Encoder RE16
U 1 1 5C84EC79
P 3900 5950
F 0 "RE16" H 4129 5996 50  0000 L CNN
F 1 "Rotary_Encoder" H 4129 5905 50  0000 L CNN
F 2 "Rotary_Encoder:RotaryEncoder_Alps_EC11E_Vertical_H20mm" H 3750 6110 50  0001 C CNN
F 3 "~" H 3900 6210 50  0001 C CNN
	1    3900 5950
	1    0    0    -1  
$EndComp
Text Label 3600 5550 2    50   ~ 0
T_GND
Text Label 3600 5950 2    50   ~ 0
T_GND
$Comp
L Interface_Expansion:MCP23017_SO IO2
U 1 1 5C84EC81
P 1950 4550
F 0 "IO2" H 1500 5500 50  0000 C CNN
F 1 "MCP23017_SO" H 1800 4950 50  0000 C CNN
F 2 "Package_SO:SOIC-28W_7.5x17.9mm_P1.27mm" H 2150 3550 50  0001 L CNN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/20001952C.pdf" H 2150 3450 50  0001 L CNN
	1    1950 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	2650 4450 3600 4450
Wire Wire Line
	2650 4650 3600 4650
Wire Wire Line
	3300 4350 3300 4250
Wire Wire Line
	3300 4250 3600 4250
Wire Wire Line
	2650 4350 3300 4350
Wire Wire Line
	3300 4750 3300 4850
Wire Wire Line
	3300 4850 3600 4850
Wire Wire Line
	2650 4750 3300 4750
Wire Wire Line
	3200 4250 3200 4050
Wire Wire Line
	3200 4050 3600 4050
Wire Wire Line
	2650 4250 3200 4250
Wire Wire Line
	3100 4150 3100 3850
Wire Wire Line
	3100 3850 3600 3850
Wire Wire Line
	2650 4150 3100 4150
Wire Wire Line
	3000 4050 3000 3650
Wire Wire Line
	3000 3650 3600 3650
Wire Wire Line
	2650 4050 3000 4050
Wire Wire Line
	2900 3950 2900 3450
Wire Wire Line
	2900 3450 3600 3450
Wire Wire Line
	2650 3950 2900 3950
Wire Wire Line
	2800 3850 2800 3250
Wire Wire Line
	2800 3250 3600 3250
Wire Wire Line
	2650 3850 2800 3850
Wire Wire Line
	2700 3750 2700 3050
Wire Wire Line
	2700 3050 3600 3050
Wire Wire Line
	2650 3750 2700 3750
Wire Wire Line
	3200 4850 3200 5050
Wire Wire Line
	3200 5050 3600 5050
Wire Wire Line
	2650 4850 3200 4850
Wire Wire Line
	3100 4950 3100 5250
Wire Wire Line
	3100 5250 3600 5250
Wire Wire Line
	2650 4950 3100 4950
Wire Wire Line
	3000 5050 3000 5450
Wire Wire Line
	3000 5450 3600 5450
Wire Wire Line
	2650 5050 3000 5050
Wire Wire Line
	2900 5150 2900 5650
Wire Wire Line
	2900 5650 3600 5650
Wire Wire Line
	2650 5150 2900 5150
Wire Wire Line
	2800 5250 2800 5850
Wire Wire Line
	2800 5850 3600 5850
Wire Wire Line
	2650 5250 2800 5250
Wire Wire Line
	2700 5350 2700 6050
Wire Wire Line
	2700 6050 3600 6050
Wire Wire Line
	2650 5350 2700 5350
Wire Wire Line
	1950 3250 1700 3250
$Comp
L Device:C_Small C19
U 1 1 5C84ECB6
P 4900 3200
F 0 "C19" H 4992 3246 50  0000 L CNN
F 1 "C" H 4992 3155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 3200 50  0001 C CNN
F 3 "~" H 4900 3200 50  0001 C CNN
	1    4900 3200
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C27
U 1 1 5C84ECBC
P 5100 3200
F 0 "C27" H 5192 3246 50  0000 L CNN
F 1 "C" H 5192 3155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 3200 50  0001 C CNN
F 3 "~" H 5100 3200 50  0001 C CNN
	1    5100 3200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 3250 4750 3250
Wire Wire Line
	4750 3250 4750 3100
Wire Wire Line
	4750 3100 4900 3100
Connection ~ 3600 3250
Wire Wire Line
	3600 3050 5100 3050
Wire Wire Line
	5100 3050 5100 3100
Connection ~ 3600 3050
Wire Wire Line
	4900 3300 5100 3300
Connection ~ 5100 3300
Wire Wire Line
	5100 3300 5250 3300
Text Label 5250 3300 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C20
U 1 1 5C84ECCD
P 4900 3600
F 0 "C20" H 4992 3646 50  0000 L CNN
F 1 "C" H 4992 3555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 3600 50  0001 C CNN
F 3 "~" H 4900 3600 50  0001 C CNN
	1    4900 3600
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C28
U 1 1 5C84ECD3
P 5100 3600
F 0 "C28" H 5192 3646 50  0000 L CNN
F 1 "C" H 5192 3555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 3600 50  0001 C CNN
F 3 "~" H 5100 3600 50  0001 C CNN
	1    5100 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 3650 4750 3650
Wire Wire Line
	4750 3650 4750 3500
Wire Wire Line
	4750 3500 4900 3500
Wire Wire Line
	3600 3450 5100 3450
Wire Wire Line
	5100 3450 5100 3500
Wire Wire Line
	4900 3700 5100 3700
Connection ~ 5100 3700
Wire Wire Line
	5100 3700 5250 3700
Text Label 5250 3700 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C21
U 1 1 5C84ECE2
P 4900 4000
F 0 "C21" H 4992 4046 50  0000 L CNN
F 1 "C" H 4992 3955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 4000 50  0001 C CNN
F 3 "~" H 4900 4000 50  0001 C CNN
	1    4900 4000
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C29
U 1 1 5C84ECE8
P 5100 4000
F 0 "C29" H 5192 4046 50  0000 L CNN
F 1 "C" H 5192 3955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 4000 50  0001 C CNN
F 3 "~" H 5100 4000 50  0001 C CNN
	1    5100 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 4050 4750 4050
Wire Wire Line
	4750 4050 4750 3900
Wire Wire Line
	4750 3900 4900 3900
Wire Wire Line
	3600 3850 5100 3850
Wire Wire Line
	5100 3850 5100 3900
Wire Wire Line
	4900 4100 5100 4100
Connection ~ 5100 4100
Wire Wire Line
	5100 4100 5250 4100
Text Label 5250 4100 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C22
U 1 1 5C84ECF7
P 4900 4400
F 0 "C22" H 4992 4446 50  0000 L CNN
F 1 "C" H 4992 4355 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 4400 50  0001 C CNN
F 3 "~" H 4900 4400 50  0001 C CNN
	1    4900 4400
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C30
U 1 1 5C84ECFD
P 5100 4400
F 0 "C30" H 5192 4446 50  0000 L CNN
F 1 "C" H 5192 4355 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 4400 50  0001 C CNN
F 3 "~" H 5100 4400 50  0001 C CNN
	1    5100 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 4450 4750 4450
Wire Wire Line
	4750 4450 4750 4300
Wire Wire Line
	4750 4300 4900 4300
Wire Wire Line
	3600 4250 5100 4250
Wire Wire Line
	5100 4250 5100 4300
Wire Wire Line
	4900 4500 5100 4500
Connection ~ 5100 4500
Wire Wire Line
	5100 4500 5250 4500
Text Label 5250 4500 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C23
U 1 1 5C84ED0C
P 4900 4800
F 0 "C23" H 4992 4846 50  0000 L CNN
F 1 "C" H 4992 4755 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 4800 50  0001 C CNN
F 3 "~" H 4900 4800 50  0001 C CNN
	1    4900 4800
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C31
U 1 1 5C84ED12
P 5100 4800
F 0 "C31" H 5192 4846 50  0000 L CNN
F 1 "C" H 5192 4755 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 4800 50  0001 C CNN
F 3 "~" H 5100 4800 50  0001 C CNN
	1    5100 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 4850 4750 4850
Wire Wire Line
	4750 4850 4750 4700
Wire Wire Line
	4750 4700 4900 4700
Wire Wire Line
	3600 4650 5100 4650
Wire Wire Line
	5100 4650 5100 4700
Wire Wire Line
	4900 4900 5100 4900
Connection ~ 5100 4900
Wire Wire Line
	5100 4900 5250 4900
Text Label 5250 4900 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C24
U 1 1 5C84ED21
P 4900 5200
F 0 "C24" H 4992 5246 50  0000 L CNN
F 1 "C" H 4992 5155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 5200 50  0001 C CNN
F 3 "~" H 4900 5200 50  0001 C CNN
	1    4900 5200
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C32
U 1 1 5C84ED27
P 5100 5200
F 0 "C32" H 5192 5246 50  0000 L CNN
F 1 "C" H 5192 5155 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 5200 50  0001 C CNN
F 3 "~" H 5100 5200 50  0001 C CNN
	1    5100 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 5250 4750 5250
Wire Wire Line
	4750 5250 4750 5100
Wire Wire Line
	4750 5100 4900 5100
Wire Wire Line
	3600 5050 5100 5050
Wire Wire Line
	5100 5050 5100 5100
Wire Wire Line
	4900 5300 5100 5300
Connection ~ 5100 5300
Wire Wire Line
	5100 5300 5250 5300
Text Label 5250 5300 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C25
U 1 1 5C84ED36
P 4900 5600
F 0 "C25" H 4992 5646 50  0000 L CNN
F 1 "C" H 4992 5555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 5600 50  0001 C CNN
F 3 "~" H 4900 5600 50  0001 C CNN
	1    4900 5600
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C33
U 1 1 5C84ED3C
P 5100 5600
F 0 "C33" H 5192 5646 50  0000 L CNN
F 1 "C" H 5192 5555 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 5600 50  0001 C CNN
F 3 "~" H 5100 5600 50  0001 C CNN
	1    5100 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 5650 4750 5650
Wire Wire Line
	4750 5650 4750 5500
Wire Wire Line
	4750 5500 4900 5500
Wire Wire Line
	3600 5450 5100 5450
Wire Wire Line
	5100 5450 5100 5500
Wire Wire Line
	4900 5700 5100 5700
Connection ~ 5100 5700
Wire Wire Line
	5100 5700 5250 5700
Text Label 5250 5700 0    50   ~ 0
T_GND
$Comp
L Device:C_Small C26
U 1 1 5C84ED4B
P 4900 6000
F 0 "C26" H 4992 6046 50  0000 L CNN
F 1 "C" H 4992 5955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 4900 6000 50  0001 C CNN
F 3 "~" H 4900 6000 50  0001 C CNN
	1    4900 6000
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C34
U 1 1 5C84ED51
P 5100 6000
F 0 "C34" H 5192 6046 50  0000 L CNN
F 1 "C" H 5192 5955 50  0000 L CNN
F 2 "Capacitor_THT:C_Disc_D3.4mm_W2.1mm_P2.50mm" H 5100 6000 50  0001 C CNN
F 3 "~" H 5100 6000 50  0001 C CNN
	1    5100 6000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 6050 4750 6050
Wire Wire Line
	4750 6050 4750 5900
Wire Wire Line
	4750 5900 4900 5900
Wire Wire Line
	3600 5850 5100 5850
Wire Wire Line
	5100 5850 5100 5900
Wire Wire Line
	4900 6100 5100 6100
Connection ~ 5100 6100
Wire Wire Line
	5100 6100 5250 6100
Text Label 5250 6100 0    50   ~ 0
T_GND
Connection ~ 3600 6050
Connection ~ 3600 5850
Connection ~ 3600 5650
Connection ~ 3600 5450
Connection ~ 3600 5250
Connection ~ 3600 5050
Connection ~ 3600 4850
Connection ~ 3600 4650
Connection ~ 3600 4450
Connection ~ 3600 4250
Connection ~ 3600 4050
Connection ~ 3600 3850
Connection ~ 3600 3650
Connection ~ 3600 3450
Text Label 1250 5350 2    50   ~ 0
T_3V3
$Comp
L Jumper:Jumper_3_Bridged12 JP2
U 1 1 5C85D5BB
P 1750 1750
F 0 "JP2" H 1750 1954 50  0000 C CNN
F 1 "Jumper_3_Bridged12" H 1750 1863 50  0000 C CNN
F 2 "Jumper:SolderJumper-3_P1.3mm_Bridged12_Pad1.0x1.5mm" H 1750 1750 50  0001 C CNN
F 3 "~" H 1750 1750 50  0001 C CNN
	1    1750 1750
	1    0    0    -1  
$EndComp
Text Label 1250 5250 2    50   ~ 0
ADDR1
Text Label 1250 5150 2    50   ~ 0
ADDR2
Text Label 6400 5250 2    50   ~ 0
ADDR1
Text Label 6400 5150 2    50   ~ 0
ADDR2
Text Label 1500 1750 2    50   ~ 0
ADDR1
Text Label 1500 1400 2    50   ~ 0
ADDR2
$Comp
L Jumper:Jumper_3_Bridged12 JP1
U 1 1 5C89681B
P 1750 1400
F 0 "JP1" H 1750 1604 50  0000 C CNN
F 1 "Jumper_3_Bridged12" H 1750 1513 50  0000 C CNN
F 2 "Jumper:SolderJumper-3_P1.3mm_Bridged12_Pad1.0x1.5mm" H 1750 1400 50  0001 C CNN
F 3 "~" H 1750 1400 50  0001 C CNN
	1    1750 1400
	1    0    0    -1  
$EndComp
Text Label 1750 1550 0    50   ~ 0
T_GND
Text Label 1750 1900 0    50   ~ 0
T_GND
Text Label 2000 1400 0    50   ~ 0
T_3V3
Text Label 2000 1750 0    50   ~ 0
T_3V3
$EndSCHEMATC
