#include <stdint.h>
#include <string.h>

#include "ultralite_can_messages.h"


/* Messages with cycle time 100 ms */

/* M_Data */
#define M_DATA_ID 0x100

void encode_M_Data(const M_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->SoC >> 0) & 0xFF;
    data[1] |= (msg->SoC >> 8) & 0xFF;
    data[2] |= (msg->Unique_ID >> 0) & 0xFF;
    data[3] |= (msg->Unique_ID >> 8) & 0xFF;
    data[4] |= (msg->Unique_ID >> 16) & 0xFF;
    data[5] |= (msg->Unique_ID >> 24) & 0xFF;
    data[6] |= (msg->Unique_ID >> 32) & 0xFF;
    data[7] |= (msg->Unique_ID >> 40) & 0xFF;
}

/* M_Battery_Voltage_Data1 */
#define M_BATTERY_VOLTAGE_DATA1_ID 0x101

void encode_M_Battery_Voltage_Data1(const M_Battery_Voltage_Data1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_1 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_1 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_2 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_2 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_3 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_3 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_4 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_4 >> 8) & 0xFF;
}

/* M_Battery_Voltage_Data2 */
#define M_BATTERY_VOLTAGE_DATA2_ID 0x102

void encode_M_Battery_Voltage_Data2(const M_Battery_Voltage_Data2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_5 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_5 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_6 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_6 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_7 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_7 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_8 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_8 >> 8) & 0xFF;
}

/* M_Battery_Voltage_Data3 */
#define M_BATTERY_VOLTAGE_DATA3_ID 0x103

void encode_M_Battery_Voltage_Data3(const M_Battery_Voltage_Data3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_9 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_9 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_10 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_10 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_11 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_11 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_12 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_12 >> 8) & 0xFF;
}

/* M_Battery_Voltage_Data4 */
#define M_BATTERY_VOLTAGE_DATA4_ID 0x104

void encode_M_Battery_Voltage_Data4(const M_Battery_Voltage_Data4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_13 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_13 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_14 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_14 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_15 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_15 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_16 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_16 >> 8) & 0xFF;
}

/* M_Max_Min_Cell_Voltage */
#define M_MAX_MIN_CELL_VOLTAGE_ID 0x105

void encode_M_Max_Min_Cell_Voltage(const M_Max_Min_Cell_Voltage_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Max_Cell_Voltage >> 0) & 0xFF;
    data[1] |= (msg->Max_Cell_Voltage >> 8) & 0xFF;
    data[2] |= (msg->Min_Cell_Voltage >> 0) & 0xFF;
    data[3] |= (msg->Min_Cell_Voltage >> 8) & 0xFF;
    data[4] |= (msg->SinglePack_Connected & 0x1) << 0;
}

/* M_Battery_PDU_Temp_Data */
#define M_BATTERY_PDU_TEMP_DATA_ID 0x106

void encode_M_Battery_PDU_Temp_Data(const M_Battery_PDU_Temp_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->PDU_Temperature_AFE >> 0) & 0xFF;
    data[1] |= (msg->PDU_Temperature_AFE >> 8) & 0xFF;
    data[2] |= (msg->PDU_Temperature_BMS >> 0) & 0xFF;
    data[3] |= (msg->PDU_Temperature_BMS >> 8) & 0xFF;
}

/* M_Battery_Temp_Data_1 */
#define M_BATTERY_TEMP_DATA_1_ID 0x107

void encode_M_Battery_Temp_Data_1(const M_Battery_Temp_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Balancing_Temperature_AFE >> 0) & 0xFF;
    data[1] |= (msg->Balancing_Temperature_AFE >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Effective_Temp >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Effective_Temp >> 8) & 0xFF;
}

/* M_Battery_Temp_Data_2 */
#define M_BATTERY_TEMP_DATA_2_ID 0x108

void encode_M_Battery_Temp_Data_2(const M_Battery_Temp_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Temp_Sensor_1 >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Temp_Sensor_1 >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Temp_Sensor_2 >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Temp_Sensor_2 >> 8) & 0xFF;
}

/* M_Battery_Temp_Data_3 */
#define M_BATTERY_TEMP_DATA_3_ID 0x109

void encode_M_Battery_Temp_Data_3(const M_Battery_Temp_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Temp_Sensor_3 >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Temp_Sensor_3 >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Temp_Sensor_4 >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Temp_Sensor_4 >> 8) & 0xFF;
}

/* M_BMS_Status_Data_1 */
#define M_BMS_STATUS_DATA_1_ID 0x110

void encode_M_BMS_Status_Data_1(const M_BMS_Status_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_IN_Supply_9V & 0x1) << 0;
    data[0] |= (msg->BMS_IN_Supply_12V & 0x1) << 1;
    data[0] |= (msg->BMS_IN_AFE_Fault & 0x1) << 2;
    data[0] |= (msg->BMS_IN_Charge_Overcurrent & 0x1) << 3;
    data[0] |= (msg->BMS_IN_Discharge_Overcurrent & 0x1) << 4;
    data[0] |= (msg->BMS_IN_PlugSense & 0x1) << 5;
    data[0] |= (msg->BMS_Out_Status & 0x1) << 6;
    data[0] |= (msg->BMS_Out_12VEnable & 0x1) << 7;
    data[1] |= (msg->BMS_Out_9VEnable & 0x1) << 0;
    data[1] |= (msg->BMS_Out_5VEnable & 0x1) << 1;
    data[1] |= (msg->BMS_Out_Gate_Driver_Enable & 0x1) << 2;
    data[1] |= (msg->BMS_Out_Charge_FET_Enable & 0x1) << 3;
    data[1] |= (msg->BMS_Out_Discharge_FET_Enable & 0x1) << 4;
    data[1] |= (msg->BMS_Out_Precharge_FET_Enable & 0x1) << 5;
    data[1] |= (msg->BMS_Out_AFE_Reset & 0x1) << 6;
    data[1] |= (msg->BMS_Out_Overload_Clear & 0x1) << 7;
    data[2] |= (msg->BMS_Out_3_3VEnable & 0x1) << 0;
    data[2] |= (msg->BMS_SlowChg_Auth & 0x1) << 1;
    data[2] |= (msg->BMS_SlowChg_Status & 0x1) << 2;
    data[2] |= (msg->Cell1_Balancing_Status & 0x1) << 3;
    data[2] |= (msg->Cell2_Balancing_Status & 0x1) << 4;
    data[2] |= (msg->Cell3_Balancing_Status & 0x1) << 5;
    data[2] |= (msg->Cell4_Balancing_Status & 0x1) << 6;
    data[2] |= (msg->Cell5_Balancing_Status & 0x1) << 7;
    data[3] |= (msg->Cell6_Balancing_Status & 0x1) << 0;
    data[3] |= (msg->Cell7_Balancing_Status & 0x1) << 1;
    data[3] |= (msg->Cell8_Balancing_Status & 0x1) << 2;
    data[3] |= (msg->Cell9_Balancing_Status & 0x1) << 3;
    data[3] |= (msg->Cell10_Balancing_Status & 0x1) << 4;
    data[3] |= (msg->Cell11_Balancing_Status & 0x1) << 5;
    data[3] |= (msg->Cell12_Balancing_Status & 0x1) << 6;
    data[3] |= (msg->Cell13_Balancing_Status & 0x1) << 7;
    data[4] |= (msg->Cell14_Balancing_Status & 0x1) << 0;
    data[4] |= (msg->Cell15_Balancing_Status & 0x1) << 1;
    data[4] |= (msg->Cell16_Balancing_Status & 0x1) << 2;
}

/* M_Current_Limit_Data */
#define M_CURRENT_LIMIT_DATA_ID 0x111

void encode_M_Current_Limit_Data(const M_Current_Limit_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Discharge_Current_Limit >> 0) & 0xFF;
    data[1] |= (msg->Discharge_Current_Limit >> 8) & 0xFF;
    data[2] |= (msg->Regenerative_Current_Limit >> 0) & 0xFF;
    data[3] |= (msg->Regenerative_Current_Limit >> 8) & 0xFF;
}

/* M_Battery_Pack_V_I */
#define M_BATTERY_PACK_V_I_ID 0x112

void encode_M_Battery_Pack_V_I(const M_Battery_Pack_V_I_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Current >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Current >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Voltage >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Voltage >> 8) & 0xFF;
}

/* M_Battery_Data_1 */
#define M_BATTERY_DATA_1_ID 0x113

void encode_M_Battery_Data_1(const M_Battery_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->SoC >> 0) & 0xFF;
    data[1] |= (msg->SoC >> 8) & 0xFF;
    data[2] |= (msg->SoH >> 0) & 0xFF;
    data[3] |= (msg->SoH >> 8) & 0xFF;
    data[4] |= (msg->Bus_Voltage >> 0) & 0xFF;
    data[5] |= (msg->Bus_Voltage >> 8) & 0xFF;
    data[6] |= (msg->Time_To_Charge >> 0) & 0xFF;
    data[7] |= (msg->Time_To_Charge >> 8) & 0xFF;
}

/* M_Battery_Data_2 */
#define M_BATTERY_DATA_2_ID 0x114

void encode_M_Battery_Data_2(const M_Battery_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_deviation >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_deviation >> 8) & 0xFF;
    data[2] |= (msg->Cycle_Number >> 0) & 0xFF;
    data[3] |= (msg->Cycle_Number >> 8) & 0xFF;
    data[4] |= (msg->AmpHr_Accumulated >> 0) & 0xFF;
    data[5] |= (msg->AmpHr_Accumulated >> 8) & 0xFF;
    data[6] |= (msg->KwHr_Accumulated >> 0) & 0xFF;
    data[7] |= (msg->KwHr_Accumulated >> 8) & 0xFF;
}

/* M_Battery_IR_Data_1 */
#define M_BATTERY_IR_DATA_1_ID 0x115

void encode_M_Battery_IR_Data_1(const M_Battery_IR_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_1_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_1_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_2_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_2_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_3_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_3_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_4_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_4_Internal_Resistance >> 8) & 0xFF;
}

/* M_Battery_IR_Data_2 */
#define M_BATTERY_IR_DATA_2_ID 0x116

void encode_M_Battery_IR_Data_2(const M_Battery_IR_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_5_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_5_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_6_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_6_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_7_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_7_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_8_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_8_Internal_Resistance >> 8) & 0xFF;
}

/* M_Battery_IR_Data_3 */
#define M_BATTERY_IR_DATA_3_ID 0x117

void encode_M_Battery_IR_Data_3(const M_Battery_IR_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_9_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_9_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_10_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_10_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_11_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_11_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_12_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_12_Internal_Resistance >> 8) & 0xFF;
}

/* M_Battery_IR_Data_4 */
#define M_BATTERY_IR_DATA_4_ID 0x118

void encode_M_Battery_IR_Data_4(const M_Battery_IR_Data_4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_13_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_13_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_14_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_14_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_15_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_15_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_16_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_16_Internal_Resistance >> 8) & 0xFF;
}

/* M_Battery_Charging_Data_1 */
#define M_BATTERY_CHARGING_DATA_1_ID 0x119

void encode_M_Battery_Charging_Data_1(const M_Battery_Charging_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_Charge_Mode & 0xFF) << 0;
    data[1] |= (msg->Charge_Demand_Voltage >> 0) & 0xFF;
    data[2] |= (msg->Charge_Demand_Voltage >> 8) & 0xFF;
    data[3] |= (msg->Charge_Demand_Current >> 0) & 0xFF;
    data[4] |= (msg->Charge_Demand_Current >> 8) & 0xFF;
}

/* M_Battery_Data_3 */
#define M_BATTERY_DATA_3_ID 0x120

void encode_M_Battery_Data_3(const M_Battery_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->RTC_Date >> 0) & 0xFF;
    data[1] |= (msg->RTC_Date >> 8) & 0xFF;
    data[2] |= (msg->RTC_Date >> 16) & 0xFF;
    data[3] |= (msg->RTC_Date >> 24) & 0xFF;
    data[4] |= (msg->RTC_Date >> 32) & 0xFF;
    data[5] |= (msg->RTC_Date >> 40) & 0xFF;
}

/* M_Battery_Data_4 */
#define M_BATTERY_DATA_4_ID 0x121

void encode_M_Battery_Data_4(const M_Battery_Data_4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->RTC_Time >> 0) & 0xFF;
    data[1] |= (msg->RTC_Time >> 8) & 0xFF;
    data[2] |= (msg->RTC_Time >> 16) & 0xFF;
    data[3] |= (msg->RTC_Time >> 24) & 0xFF;
    data[4] |= (msg->RTC_Time >> 32) & 0xFF;
    data[5] |= (msg->RTC_Time >> 40) & 0xFF;
}

/* M_Battery_OCV_Data1 */
#define M_BATTERY_OCV_DATA1_ID 0x124

void encode_M_Battery_OCV_Data1(const M_Battery_OCV_Data1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_1_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_1_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_2_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_2_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_3_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_3_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_4_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_4_OCV >> 8) & 0xFF;
}

/* M_Battery_OCV_Data2 */
#define M_BATTERY_OCV_DATA2_ID 0x125

void encode_M_Battery_OCV_Data2(const M_Battery_OCV_Data2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_5_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_5_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_6_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_6_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_7_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_7_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_8_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_8_OCV >> 8) & 0xFF;
}

/* M_Battery_OCV_Data3 */
#define M_BATTERY_OCV_DATA3_ID 0x126

void encode_M_Battery_OCV_Data3(const M_Battery_OCV_Data3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_9_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_9_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_10_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_10_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_11_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_11_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_12_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_12_OCV >> 8) & 0xFF;
}

/* M_Battery_OCV_Data4 */
#define M_BATTERY_OCV_DATA4_ID 0x127

void encode_M_Battery_OCV_Data4(const M_Battery_OCV_Data4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_13_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_13_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_14_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_14_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_15_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_15_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_16_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_16_OCV >> 8) & 0xFF;
}

/* S_Data */
#define S_DATA_ID 0x200

void encode_S_Data(const S_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->SoC >> 0) & 0xFF;
    data[1] |= (msg->SoC >> 8) & 0xFF;
    data[2] |= (msg->Unique_ID >> 0) & 0xFF;
    data[3] |= (msg->Unique_ID >> 8) & 0xFF;
    data[4] |= (msg->Unique_ID >> 16) & 0xFF;
    data[5] |= (msg->Unique_ID >> 24) & 0xFF;
    data[6] |= (msg->Unique_ID >> 32) & 0xFF;
    data[7] |= (msg->Unique_ID >> 40) & 0xFF;
}

/* S_Battery_Voltage_Data1 */
#define S_BATTERY_VOLTAGE_DATA1_ID 0x201

void encode_S_Battery_Voltage_Data1(const S_Battery_Voltage_Data1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_1 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_1 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_2 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_2 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_3 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_3 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_4 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_4 >> 8) & 0xFF;
}

/* S_Battery_Voltage_Data2 */
#define S_BATTERY_VOLTAGE_DATA2_ID 0x202

void encode_S_Battery_Voltage_Data2(const S_Battery_Voltage_Data2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_5 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_5 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_6 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_6 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_7 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_7 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_8 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_8 >> 8) & 0xFF;
}

/* S_Battery_Voltage_Data3 */
#define S_BATTERY_VOLTAGE_DATA3_ID 0x203

void encode_S_Battery_Voltage_Data3(const S_Battery_Voltage_Data3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_9 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_9 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_10 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_10 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_11 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_11 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_12 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_12 >> 8) & 0xFF;
}

/* S_Battery_Voltage_Data4 */
#define S_BATTERY_VOLTAGE_DATA4_ID 0x204

void encode_S_Battery_Voltage_Data4(const S_Battery_Voltage_Data4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_13 >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_13 >> 8) & 0xFF;
    data[2] |= (msg->Cell_Voltage_14 >> 0) & 0xFF;
    data[3] |= (msg->Cell_Voltage_14 >> 8) & 0xFF;
    data[4] |= (msg->Cell_Voltage_15 >> 0) & 0xFF;
    data[5] |= (msg->Cell_Voltage_15 >> 8) & 0xFF;
    data[6] |= (msg->Cell_Voltage_16 >> 0) & 0xFF;
    data[7] |= (msg->Cell_Voltage_16 >> 8) & 0xFF;
}

/* S_Max_Min_Cell_Voltage */
#define S_MAX_MIN_CELL_VOLTAGE_ID 0x205

void encode_S_Max_Min_Cell_Voltage(const S_Max_Min_Cell_Voltage_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Max_Cell_Voltage >> 0) & 0xFF;
    data[1] |= (msg->Max_Cell_Voltage >> 8) & 0xFF;
    data[2] |= (msg->Min_Cell_Voltage >> 0) & 0xFF;
    data[3] |= (msg->Min_Cell_Voltage >> 8) & 0xFF;
}

/* S_Battery_PDU_Temp_Data */
#define S_BATTERY_PDU_TEMP_DATA_ID 0x206

void encode_S_Battery_PDU_Temp_Data(const S_Battery_PDU_Temp_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->PDU_Temperature_AFE >> 0) & 0xFF;
    data[1] |= (msg->PDU_Temperature_AFE >> 8) & 0xFF;
    data[2] |= (msg->PDU_Temperature_BMS >> 0) & 0xFF;
    data[3] |= (msg->PDU_Temperature_BMS >> 8) & 0xFF;
}

/* S_Battery_Temp_Data_1 */
#define S_BATTERY_TEMP_DATA_1_ID 0x207

void encode_S_Battery_Temp_Data_1(const S_Battery_Temp_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Balancing_Temperature_AFE >> 0) & 0xFF;
    data[1] |= (msg->Balancing_Temperature_AFE >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Effective_Temp >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Effective_Temp >> 8) & 0xFF;
}

/* S_Battery_Temp_Data_2 */
#define S_BATTERY_TEMP_DATA_2_ID 0x208

void encode_S_Battery_Temp_Data_2(const S_Battery_Temp_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Temp_Sensor_1 >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Temp_Sensor_1 >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Temp_Sensor_2 >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Temp_Sensor_2 >> 8) & 0xFF;
}

/* S_Battery_Temp_Data_3 */
#define S_BATTERY_TEMP_DATA_3_ID 0x209

void encode_S_Battery_Temp_Data_3(const S_Battery_Temp_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Temp_Sensor_3 >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Temp_Sensor_3 >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Temp_Sensor_4 >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Temp_Sensor_4 >> 8) & 0xFF;
}

/* S_BMS_Status_Data_1 */
#define S_BMS_STATUS_DATA_1_ID 0x210

void encode_S_BMS_Status_Data_1(const S_BMS_Status_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_IN_Supply_9V & 0x1) << 0;
    data[0] |= (msg->BMS_IN_Supply_12V & 0x1) << 1;
    data[0] |= (msg->BMS_IN_AFE_Fault & 0x1) << 2;
    data[0] |= (msg->BMS_IN_Charge_Overcurrent & 0x1) << 3;
    data[0] |= (msg->BMS_IN_Discharge_Overcurrent & 0x1) << 4;
    data[0] |= (msg->BMS_IN_PlugSense & 0x1) << 5;
    data[0] |= (msg->BMS_Out_Status & 0x1) << 6;
    data[0] |= (msg->BMS_Out_12VEnable & 0x1) << 7;
    data[1] |= (msg->BMS_Out_9VEnable & 0x1) << 0;
    data[1] |= (msg->BMS_Out_5VEnable & 0x1) << 1;
    data[1] |= (msg->BMS_Out_Gate_Driver_Enable & 0x1) << 2;
    data[1] |= (msg->BMS_Out_Charge_FET_Enable & 0x1) << 3;
    data[1] |= (msg->BMS_Out_Discharge_FET_Enable & 0x1) << 4;
    data[1] |= (msg->BMS_Out_Precharge_FET_Enable & 0x1) << 5;
    data[1] |= (msg->BMS_Out_AFE_Reset & 0x1) << 6;
    data[1] |= (msg->BMS_Out_Overload_Clear & 0x1) << 7;
    data[2] |= (msg->BMS_Out_3_3VEnable & 0x1) << 0;
    data[2] |= (msg->BMS_SlowChg_Auth & 0x1) << 1;
    data[2] |= (msg->BMS_SlowChg_Status & 0x1) << 2;
    data[2] |= (msg->Cell1_Balancing_Status & 0x1) << 3;
    data[2] |= (msg->Cell2_Balancing_Status & 0x1) << 4;
    data[2] |= (msg->Cell3_Balancing_Status & 0x1) << 5;
    data[2] |= (msg->Cell4_Balancing_Status & 0x1) << 6;
    data[2] |= (msg->Cell5_Balancing_Status & 0x1) << 7;
    data[3] |= (msg->Cell6_Balancing_Status & 0x1) << 0;
    data[3] |= (msg->Cell7_Balancing_Status & 0x1) << 1;
    data[3] |= (msg->Cell8_Balancing_Status & 0x1) << 2;
    data[3] |= (msg->Cell9_Balancing_Status & 0x1) << 3;
    data[3] |= (msg->Cell10_Balancing_Status & 0x1) << 4;
    data[3] |= (msg->Cell11_Balancing_Status & 0x1) << 5;
    data[3] |= (msg->Cell12_Balancing_Status & 0x1) << 6;
    data[3] |= (msg->Cell13_Balancing_Status & 0x1) << 7;
    data[4] |= (msg->Cell14_Balancing_Status & 0x1) << 0;
    data[4] |= (msg->Cell15_Balancing_Status & 0x1) << 1;
    data[4] |= (msg->Cell16_Balancing_Status & 0x1) << 2;
}

/* S_Current_Limit_Data */
#define S_CURRENT_LIMIT_DATA_ID 0x211

void encode_S_Current_Limit_Data(const S_Current_Limit_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Discharge_Current_Limit >> 0) & 0xFF;
    data[1] |= (msg->Discharge_Current_Limit >> 8) & 0xFF;
    data[2] |= (msg->Regenerative_Current_Limit >> 0) & 0xFF;
    data[3] |= (msg->Regenerative_Current_Limit >> 8) & 0xFF;
}

/* S_Battery_Pack_V_I */
#define S_BATTERY_PACK_V_I_ID 0x212

void encode_S_Battery_Pack_V_I(const S_Battery_Pack_V_I_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Battery_Pack_Current >> 0) & 0xFF;
    data[1] |= (msg->Battery_Pack_Current >> 8) & 0xFF;
    data[2] |= (msg->Battery_Pack_Voltage >> 0) & 0xFF;
    data[3] |= (msg->Battery_Pack_Voltage >> 8) & 0xFF;
}

/* S_Battery_Data_1 */
#define S_BATTERY_DATA_1_ID 0x213

void encode_S_Battery_Data_1(const S_Battery_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->SoC >> 0) & 0xFF;
    data[1] |= (msg->SoC >> 8) & 0xFF;
    data[2] |= (msg->SoH >> 0) & 0xFF;
    data[3] |= (msg->SoH >> 8) & 0xFF;
    data[4] |= (msg->Bus_Voltage >> 0) & 0xFF;
    data[5] |= (msg->Bus_Voltage >> 8) & 0xFF;
    data[6] |= (msg->Time_To_Charge >> 0) & 0xFF;
    data[7] |= (msg->Time_To_Charge >> 8) & 0xFF;
}

/* S_Battery_Data_2 */
#define S_BATTERY_DATA_2_ID 0x214

void encode_S_Battery_Data_2(const S_Battery_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_Voltage_deviation >> 0) & 0xFF;
    data[1] |= (msg->Cell_Voltage_deviation >> 8) & 0xFF;
    data[2] |= (msg->Cycle_Number >> 0) & 0xFF;
    data[3] |= (msg->Cycle_Number >> 8) & 0xFF;
    data[4] |= (msg->AmpHr_Accumulated >> 0) & 0xFF;
    data[5] |= (msg->AmpHr_Accumulated >> 8) & 0xFF;
    data[6] |= (msg->KwHr_Accumulated >> 0) & 0xFF;
    data[7] |= (msg->KwHr_Accumulated >> 8) & 0xFF;
}

/* S_Battery_IR_Data_1 */
#define S_BATTERY_IR_DATA_1_ID 0x215

void encode_S_Battery_IR_Data_1(const S_Battery_IR_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_1_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_1_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_2_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_2_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_3_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_3_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_4_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_4_Internal_Resistance >> 8) & 0xFF;
}

/* S_Battery_IR_Data_2 */
#define S_BATTERY_IR_DATA_2_ID 0x216

void encode_S_Battery_IR_Data_2(const S_Battery_IR_Data_2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_5_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_5_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_6_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_6_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_7_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_7_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_8_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_8_Internal_Resistance >> 8) & 0xFF;
}

/* S_Battery_IR_Data_3 */
#define S_BATTERY_IR_DATA_3_ID 0x217

void encode_S_Battery_IR_Data_3(const S_Battery_IR_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_9_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_9_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_10_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_10_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_11_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_11_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_12_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_12_Internal_Resistance >> 8) & 0xFF;
}

/* S_Battery_IR_Data_4 */
#define S_BATTERY_IR_DATA_4_ID 0x218

void encode_S_Battery_IR_Data_4(const S_Battery_IR_Data_4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_13_Internal_Resistance >> 0) & 0xFF;
    data[1] |= (msg->Cell_13_Internal_Resistance >> 8) & 0xFF;
    data[2] |= (msg->Cell_14_Internal_Resistance >> 0) & 0xFF;
    data[3] |= (msg->Cell_14_Internal_Resistance >> 8) & 0xFF;
    data[4] |= (msg->Cell_15_Internal_Resistance >> 0) & 0xFF;
    data[5] |= (msg->Cell_15_Internal_Resistance >> 8) & 0xFF;
    data[6] |= (msg->Cell_16_Internal_Resistance >> 0) & 0xFF;
    data[7] |= (msg->Cell_16_Internal_Resistance >> 8) & 0xFF;
}

/* S_Battery_Charging_Data_1 */
#define S_BATTERY_CHARGING_DATA_1_ID 0x219

void encode_S_Battery_Charging_Data_1(const S_Battery_Charging_Data_1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_Charge_Mode & 0xFF) << 0;
    data[1] |= (msg->Charge_Demand_Voltage >> 0) & 0xFF;
    data[2] |= (msg->Charge_Demand_Voltage >> 8) & 0xFF;
    data[3] |= (msg->Charge_Demand_Current >> 0) & 0xFF;
    data[4] |= (msg->Charge_Demand_Current >> 8) & 0xFF;
}

/* S_Battery_Data_3 */
#define S_BATTERY_DATA_3_ID 0x220

void encode_S_Battery_Data_3(const S_Battery_Data_3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->RTC_Date >> 0) & 0xFF;
    data[1] |= (msg->RTC_Date >> 8) & 0xFF;
    data[2] |= (msg->RTC_Date >> 16) & 0xFF;
    data[3] |= (msg->RTC_Date >> 24) & 0xFF;
    data[4] |= (msg->RTC_Date >> 32) & 0xFF;
    data[5] |= (msg->RTC_Date >> 40) & 0xFF;
}

/* S_Battery_Data_4 */
#define S_BATTERY_DATA_4_ID 0x221

void encode_S_Battery_Data_4(const S_Battery_Data_4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->RTC_Time >> 0) & 0xFF;
    data[1] |= (msg->RTC_Time >> 8) & 0xFF;
    data[2] |= (msg->RTC_Time >> 16) & 0xFF;
    data[3] |= (msg->RTC_Time >> 24) & 0xFF;
    data[4] |= (msg->RTC_Time >> 32) & 0xFF;
    data[5] |= (msg->RTC_Time >> 40) & 0xFF;
}

/* S_Battery_OCV_Data1 */
#define S_BATTERY_OCV_DATA1_ID 0x224

void encode_S_Battery_OCV_Data1(const S_Battery_OCV_Data1_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_1_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_1_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_2_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_2_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_3_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_3_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_4_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_4_OCV >> 8) & 0xFF;
}

/* S_Battery_OCV_Data2 */
#define S_BATTERY_OCV_DATA2_ID 0x225

void encode_S_Battery_OCV_Data2(const S_Battery_OCV_Data2_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_5_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_5_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_6_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_6_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_7_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_7_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_8_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_8_OCV >> 8) & 0xFF;
}

/* S_Battery_OCV_Data3 */
#define S_BATTERY_OCV_DATA3_ID 0x226

void encode_S_Battery_OCV_Data3(const S_Battery_OCV_Data3_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_9_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_9_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_10_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_10_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_11_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_11_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_12_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_12_OCV >> 8) & 0xFF;
}

/* S_Battery_OCV_Data4 */
#define S_BATTERY_OCV_DATA4_ID 0x227

void encode_S_Battery_OCV_Data4(const S_Battery_OCV_Data4_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Cell_13_OCV >> 0) & 0xFF;
    data[1] |= (msg->Cell_13_OCV >> 8) & 0xFF;
    data[2] |= (msg->Cell_14_OCV >> 0) & 0xFF;
    data[3] |= (msg->Cell_14_OCV >> 8) & 0xFF;
    data[4] |= (msg->Cell_15_OCV >> 0) & 0xFF;
    data[5] |= (msg->Cell_15_OCV >> 8) & 0xFF;
    data[6] |= (msg->Cell_16_OCV >> 0) & 0xFF;
    data[7] |= (msg->Cell_16_OCV >> 8) & 0xFF;
}

/* MCU_Fault_Data */
#define MCU_FAULT_DATA_ID 0x300

void encode_MCU_Fault_Data(const MCU_Fault_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Short_Circuit & 0x1) << 0;
    data[0] |= (msg->Open_Circuit & 0x1) << 1;
    data[0] |= (msg->Over_Current & 0x1) << 2;
    data[0] |= (msg->MCU_Over_Temperature & 0x1) << 3;
    data[0] |= (msg->Over_Voltage & 0x1) << 4;
    data[0] |= (msg->Under_Voltage & 0x1) << 5;
    data[0] |= (msg->Motor_Hall_Sensor_Error & 0x1) << 6;
    data[0] |= (msg->Motor_Unint_AccDeacc & 0x1) << 7;
    data[1] |= (msg->Motor_OvrSpeed & 0x1) << 0;
    data[1] |= (msg->Motor_Over_Temperature & 0x1) << 1;
    data[1] |= (msg->Throttle_Error & 0x1) << 2;
    data[1] |= (msg->MCU_Low_Voltage_Err & 0x1) << 3;
    data[1] |= (msg->MCU_High_Voltage_Err & 0x1) << 4;
}

/* MCU_Data */
#define MCU_DATA_ID 0x301

void encode_MCU_Data(const MCU_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Drive_Modes & 0xF) << 0;
    data[0] |= (msg->Charge_CutOff & 0x1) << 4;
    data[0] |= (msg->SideStand_Status & 0x1) << 5;
    data[0] |= (msg->BrakeSwitch_Status & 0x1) << 6;
    data[0] |= (msg->Regen_State & 0x1) << 7;
    data[1] |= (msg->Vehicle_Speed >> 0) & 0xFF;
    data[2] |= (msg->Vehicle_Speed >> 8) & 0xFF;
    data[3] |= (msg->Motor_RPM >> 0) & 0xFF;
    data[4] |= (msg->Motor_RPM >> 8) & 0xFF;
}

/* MCU_Odo_Data */
#define MCU_ODO_DATA_ID 0x302

void encode_MCU_Odo_Data(const MCU_Odo_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Vehicle_Odo_Data >> 0) & 0xFF;
    data[1] |= (msg->Vehicle_Odo_Data >> 8) & 0xFF;
    data[2] |= (msg->Vehicle_Odo_Data >> 16) & 0xFF;
    data[3] |= (msg->Vehicle_Odo_Data >> 24) & 0xFF;
    data[4] |= (msg->Trip_Odo_Data >> 0) & 0xFF;
    data[5] |= (msg->Trip_Odo_Data >> 8) & 0xFF;
    data[6] |= (msg->Trip_Odo_Data >> 16) & 0xFF;
    data[7] |= (msg->Trip_Odo_Data >> 24) & 0xFF;
}

/* MCU_Temp_Data */
#define MCU_TEMP_DATA_ID 0x303

void encode_MCU_Temp_Data(const MCU_Temp_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Controller_Temp_Data >> 0) & 0xFF;
    data[1] |= (msg->Controller_Temp_Data >> 8) & 0xFF;
    data[2] |= (msg->Motor_Temp_Data >> 0) & 0xFF;
    data[3] |= (msg->Motor_Temp_Data >> 8) & 0xFF;
}

/* Charger_Data */
#define CHARGER_DATA_ID 0x400

void encode_Charger_Data(const Charger_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->Charger_Out_Voltage >> 0) & 0xFF;
    data[1] |= (msg->Charger_Out_Voltage >> 8) & 0xFF;
    data[2] |= (msg->Charger_Out_Current >> 0) & 0xFF;
    data[3] |= (msg->Charger_Out_Current >> 8) & 0xFF;
    data[4] |= (msg->Charger_Out_Current >> 16) & 0xFF;
    data[5] |= (msg->Charger_Out_Current >> 24) & 0xFF;
    data[6] |= (msg->Charger_Hardware & 0x1) << 0;
    data[6] |= (msg->Charger_OverTemp & 0x1) << 1;
    data[6] |= (msg->Charger_Input & 0x1) << 2;
    data[6] |= (msg->Charger_Ready & 0x1) << 3;
    data[6] |= (msg->Charger_Start & 0x1) << 4;
    data[6] |= (msg->Charger_CAN & 0x1) << 5;
}


/* Messages with cycle time 10 ms */

/* M_Battery_Data_5 */
#define M_BATTERY_DATA_5_ID 0x122

void encode_M_Battery_Data_5(const M_Battery_Data_5_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_Modes & 0xF) << 0;
    data[0] |= (msg->Contactor_State & 0xF) << 4;
    data[1] |= (msg->Prechg_Cont_Cmd & 0x1) << 0;
    data[1] |= (msg->Chg_Cont_Cmd & 0x1) << 1;
    data[1] |= (msg->DisChg_Cont_Cmd & 0x1) << 2;
    data[2] |= (msg->Dishcarge_Cycle_Count >> 0) & 0xFF;
    data[3] |= (msg->Dishcarge_Cycle_Count >> 8) & 0xFF;
    data[4] |= (msg->Charge_Cycle_Count >> 0) & 0xFF;
    data[5] |= (msg->Charge_Cycle_Count >> 8) & 0xFF;
}

/* S_Battery_Data_5 */
#define S_BATTERY_DATA_5_ID 0x222

void encode_S_Battery_Data_5(const S_Battery_Data_5_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_Modes & 0xF) << 0;
    data[0] |= (msg->Contactor_State & 0xF) << 4;
    data[1] |= (msg->Prechg_Cont_Cmd & 0x1) << 0;
    data[1] |= (msg->Chg_Cont_Cmd & 0x1) << 1;
    data[1] |= (msg->DisChg_Cont_Cmd & 0x1) << 2;
}


/* Messages with cycle time 200 ms */

/* M_Battery_Fault_Data */
#define M_BATTERY_FAULT_DATA_ID 0x123

void encode_M_Battery_Fault_Data(const M_Battery_Fault_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_CutOff & 0x1) << 0;
    data[0] |= (msg->PreCharge_Err_Short & 0x1) << 1;
    data[0] |= (msg->Precharge_Fail & 0x1) << 2;
    data[0] |= (msg->Precharge_Fail_Perm & 0x1) << 3;
    data[0] |= (msg->Main_Connection_Err & 0x1) << 4;
    data[0] |= (msg->Dis_Connection_Err & 0x1) << 5;
    data[0] |= (msg->Cell_Ovr_Voltage & 0x1) << 6;
    data[0] |= (msg->Cell_Und_Voltage & 0x1) << 7;
    data[1] |= (msg->Short_Circuit_Err & 0x1) << 0;
    data[1] |= (msg->Short_Circuit_Perm & 0x1) << 1;
    data[1] |= (msg->Over_Temp_Perm & 0x1) << 2;
    data[1] |= (msg->PDU_Temp_Err & 0x1) << 3;
    data[1] |= (msg->Chg_Ovr_Vol_Warn & 0x1) << 4;
    data[1] |= (msg->Chg_Ovr_Vol_Err & 0x1) << 5;
    data[1] |= (msg->Chg_Ovr_Vol_Perm & 0x1) << 6;
    data[1] |= (msg->Chg_Und_Vol_Warn & 0x1) << 7;
    data[2] |= (msg->Chg_OvrTemp_Warn & 0x1) << 0;
    data[2] |= (msg->Dis_OvrTemp_Warn & 0x1) << 1;
    data[2] |= (msg->Dis_OvrTemp_Err & 0x1) << 2;
    data[2] |= (msg->Charge_CutOff & 0x1) << 3;
    data[2] |= (msg->Dis_CutOff & 0x1) << 4;
    data[2] |= (msg->Batt_TempRise_Perm & 0x1) << 5;
    data[2] |= (msg->PDU_TempRise_Perm & 0x1) << 6;
    data[2] |= (msg->Therm_RunAway_CutOFF & 0x1) << 7;
    data[3] |= (msg->Ther_RunAway_Alert & 0x1) << 0;
}

/* S_Battery_Fault_Data */
#define S_BATTERY_FAULT_DATA_ID 0x223

void encode_S_Battery_Fault_Data(const S_Battery_Fault_Data_t* msg, uint8_t* data) {
    memset(data, 0, 8);
    data[0] |= (msg->BMS_CutOff & 0x1) << 0;
    data[0] |= (msg->PreCharge_Err_Short & 0x1) << 1;
    data[0] |= (msg->Precharge_Fail & 0x1) << 2;
    data[0] |= (msg->Precharge_Fail_Perm & 0x1) << 3;
    data[0] |= (msg->Main_Connection_Err & 0x1) << 4;
    data[0] |= (msg->Dis_Connection_Err & 0x1) << 5;
    data[0] |= (msg->Cell_Ovr_Voltage & 0x1) << 6;
    data[0] |= (msg->Cell_Und_Voltage & 0x1) << 7;
    data[1] |= (msg->Short_Circuit_Err & 0x1) << 0;
    data[1] |= (msg->Short_Circuit_Perm & 0x1) << 1;
    data[1] |= (msg->Over_Temp_Perm & 0x1) << 2;
    data[1] |= (msg->PDU_Temp_Err & 0x1) << 3;
    data[1] |= (msg->Chg_Ovr_Vol_Warn & 0x1) << 4;
    data[1] |= (msg->Chg_Ovr_Vol_Err & 0x1) << 5;
    data[1] |= (msg->Chg_Ovr_Vol_Perm & 0x1) << 6;
    data[1] |= (msg->Chg_Und_Vol_Warn & 0x1) << 7;
    data[2] |= (msg->Chg_OvrTemp_Warn & 0x1) << 0;
    data[2] |= (msg->Dis_OvrTemp_Warn & 0x1) << 1;
    data[2] |= (msg->Dis_OvrTemp_Err & 0x1) << 2;
    data[2] |= (msg->Charge_CutOff & 0x1) << 3;
    data[2] |= (msg->Dis_CutOff & 0x1) << 4;
    data[2] |= (msg->Batt_TempRise_Perm & 0x1) << 5;
    data[2] |= (msg->PDU_TempRise_Perm & 0x1) << 6;
    data[2] |= (msg->Therm_RunAway_CutOFF & 0x1) << 7;
    data[3] |= (msg->Ther_RunAway_Alert & 0x1) << 0;
}


