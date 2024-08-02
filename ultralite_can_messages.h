#ifndef CAN_MESSAGES_H
#define CAN_MESSAGES_H

#include <stdint.h>

#define M_DATA_ID 0x100
#define M_BATTERY_VOLTAGE_DATA1_ID 0x101
#define M_BATTERY_VOLTAGE_DATA2_ID 0x102
#define M_BATTERY_VOLTAGE_DATA3_ID 0x103
#define M_BATTERY_VOLTAGE_DATA4_ID 0x104
#define M_MAX_MIN_CELL_VOLTAGE_ID 0x105
#define M_BATTERY_PDU_TEMP_DATA_ID 0x106
#define M_BATTERY_TEMP_DATA_1_ID 0x107
#define M_BATTERY_TEMP_DATA_2_ID 0x108
#define M_BATTERY_TEMP_DATA_3_ID 0x109
#define M_BMS_STATUS_DATA_1_ID 0x110
#define M_CURRENT_LIMIT_DATA_ID 0x111
#define M_BATTERY_PACK_V_I_ID 0x112
#define M_BATTERY_DATA_1_ID 0x113
#define M_BATTERY_DATA_2_ID 0x114
#define M_BATTERY_IR_DATA_1_ID 0x115
#define M_BATTERY_IR_DATA_2_ID 0x116
#define M_BATTERY_IR_DATA_3_ID 0x117
#define M_BATTERY_IR_DATA_4_ID 0x118
#define M_BATTERY_CHARGING_DATA_1_ID 0x119
#define M_BATTERY_DATA_3_ID 0x120
#define M_BATTERY_DATA_4_ID 0x121
#define M_BATTERY_DATA_5_ID 0x122
#define M_BATTERY_FAULT_DATA_ID 0x123
#define M_BATTERY_OCV_DATA1_ID 0x124
#define M_BATTERY_OCV_DATA2_ID 0x125
#define M_BATTERY_OCV_DATA3_ID 0x126
#define M_BATTERY_OCV_DATA4_ID 0x127
#define S_DATA_ID 0x200
#define S_BATTERY_VOLTAGE_DATA1_ID 0x201
#define S_BATTERY_VOLTAGE_DATA2_ID 0x202
#define S_BATTERY_VOLTAGE_DATA3_ID 0x203
#define S_BATTERY_VOLTAGE_DATA4_ID 0x204
#define S_MAX_MIN_CELL_VOLTAGE_ID 0x205
#define S_BATTERY_PDU_TEMP_DATA_ID 0x206
#define S_BATTERY_TEMP_DATA_1_ID 0x207
#define S_BATTERY_TEMP_DATA_2_ID 0x208
#define S_BATTERY_TEMP_DATA_3_ID 0x209
#define S_BMS_STATUS_DATA_1_ID 0x210
#define S_CURRENT_LIMIT_DATA_ID 0x211
#define S_BATTERY_PACK_V_I_ID 0x212
#define S_BATTERY_DATA_1_ID 0x213
#define S_BATTERY_DATA_2_ID 0x214
#define S_BATTERY_IR_DATA_1_ID 0x215
#define S_BATTERY_IR_DATA_2_ID 0x216
#define S_BATTERY_IR_DATA_3_ID 0x217
#define S_BATTERY_IR_DATA_4_ID 0x218
#define S_BATTERY_CHARGING_DATA_1_ID 0x219
#define S_BATTERY_DATA_3_ID 0x220
#define S_BATTERY_DATA_4_ID 0x221
#define S_BATTERY_DATA_5_ID 0x222
#define S_BATTERY_FAULT_DATA_ID 0x223
#define S_BATTERY_OCV_DATA1_ID 0x224
#define S_BATTERY_OCV_DATA2_ID 0x225
#define S_BATTERY_OCV_DATA3_ID 0x226
#define S_BATTERY_OCV_DATA4_ID 0x227
#define MCU_FAULT_DATA_ID 0x300
#define MCU_DATA_ID 0x301
#define MCU_ODO_DATA_ID 0x302
#define MCU_TEMP_DATA_ID 0x303
#define CHARGER_DATA_ID 0x400
#define SEND_VCU_CMD_ID 0x580

typedef struct {
    uint16_t SoC : 16;
    uint64_t Unique_ID : 48;
} M_Data_t;

typedef struct {
    uint16_t Cell_Voltage_1 : 16;
    uint16_t Cell_Voltage_2 : 16;
    uint16_t Cell_Voltage_3 : 16;
    uint16_t Cell_Voltage_4 : 16;
} M_Battery_Voltage_Data1_t;

typedef struct {
    uint16_t Cell_Voltage_5 : 16;
    uint16_t Cell_Voltage_6 : 16;
    uint16_t Cell_Voltage_7 : 16;
    uint16_t Cell_Voltage_8 : 16;
} M_Battery_Voltage_Data2_t;

typedef struct {
    uint16_t Cell_Voltage_9 : 16;
    uint16_t Cell_Voltage_10 : 16;
    uint16_t Cell_Voltage_11 : 16;
    uint16_t Cell_Voltage_12 : 16;
} M_Battery_Voltage_Data3_t;

typedef struct {
    uint16_t Cell_Voltage_13 : 16;
    uint16_t Cell_Voltage_14 : 16;
    uint16_t Cell_Voltage_15 : 16;
    uint16_t Cell_Voltage_16 : 16;
} M_Battery_Voltage_Data4_t;

typedef struct {
    uint16_t Max_Cell_Voltage : 16;
    uint16_t Min_Cell_Voltage : 16;
    uint8_t SinglePack_Connected : 1;
} M_Max_Min_Cell_Voltage_t;

typedef struct {
    uint16_t PDU_Temperature_AFE : 16;
    uint16_t PDU_Temperature_BMS : 16;
} M_Battery_PDU_Temp_Data_t;

typedef struct {
    uint16_t Balancing_Temperature_AFE : 16;
    uint16_t Battery_Pack_Effective_Temp : 16;
} M_Battery_Temp_Data_1_t;

typedef struct {
    uint16_t Battery_Pack_Temp_Sensor_1 : 16;
    uint16_t Battery_Pack_Temp_Sensor_2 : 16;
} M_Battery_Temp_Data_2_t;

typedef struct {
    uint16_t Battery_Pack_Temp_Sensor_3 : 16;
    uint16_t Battery_Pack_Temp_Sensor_4 : 16;
} M_Battery_Temp_Data_3_t;

typedef struct {
    uint8_t BMS_IN_Supply_9V : 1;
    uint8_t BMS_IN_Supply_12V : 1;
    uint8_t BMS_IN_AFE_Fault : 1;
    uint8_t BMS_IN_Charge_Overcurrent : 1;
    uint8_t BMS_IN_Discharge_Overcurrent : 1;
    uint8_t BMS_IN_PlugSense : 1;
    uint8_t BMS_Out_Status : 1;
    uint8_t BMS_Out_12VEnable : 1;
    uint8_t BMS_Out_9VEnable : 1;
    uint8_t BMS_Out_5VEnable : 1;
    uint8_t BMS_Out_Gate_Driver_Enable : 1;
    uint8_t BMS_Out_Charge_FET_Enable : 1;
    uint8_t BMS_Out_Discharge_FET_Enable : 1;
    uint8_t BMS_Out_Precharge_FET_Enable : 1;
    uint8_t BMS_Out_AFE_Reset : 1;
    uint8_t BMS_Out_Overload_Clear : 1;
    uint8_t BMS_Out_3_3VEnable : 1;
    uint8_t BMS_SlowChg_Auth : 1;
    uint8_t BMS_SlowChg_Status : 1;
    uint8_t Cell1_Balancing_Status : 1;
    uint8_t Cell2_Balancing_Status : 1;
    uint8_t Cell3_Balancing_Status : 1;
    uint8_t Cell4_Balancing_Status : 1;
    uint8_t Cell5_Balancing_Status : 1;
    uint8_t Cell6_Balancing_Status : 1;
    uint8_t Cell7_Balancing_Status : 1;
    uint8_t Cell8_Balancing_Status : 1;
    uint8_t Cell9_Balancing_Status : 1;
    uint8_t Cell10_Balancing_Status : 1;
    uint8_t Cell11_Balancing_Status : 1;
    uint8_t Cell12_Balancing_Status : 1;
    uint8_t Cell13_Balancing_Status : 1;
    uint8_t Cell14_Balancing_Status : 1;
    uint8_t Cell15_Balancing_Status : 1;
    uint8_t Cell16_Balancing_Status : 1;
} M_BMS_Status_Data_1_t;

typedef struct {
    uint16_t Discharge_Current_Limit : 16;
    uint16_t Regenerative_Current_Limit : 16;
} M_Current_Limit_Data_t;

typedef struct {
    uint16_t Battery_Pack_Current : 16;
    uint16_t Battery_Pack_Voltage : 16;
} M_Battery_Pack_V_I_t;

typedef struct {
    uint16_t SoC : 16;
    uint16_t SoH : 16;
    uint16_t Bus_Voltage : 16;
    uint16_t Time_To_Charge : 16;
} M_Battery_Data_1_t;

typedef struct {
    uint16_t Cell_Voltage_deviation : 16;
    uint16_t Cycle_Number : 16;
    uint16_t AmpHr_Accumulated : 16;
    uint16_t KwHr_Accumulated : 16;
} M_Battery_Data_2_t;

typedef struct {
    uint16_t Cell_1_Internal_Resistance : 16;
    uint16_t Cell_2_Internal_Resistance : 16;
    uint16_t Cell_3_Internal_Resistance : 16;
    uint16_t Cell_4_Internal_Resistance : 16;
} M_Battery_IR_Data_1_t;

typedef struct {
    uint16_t Cell_5_Internal_Resistance : 16;
    uint16_t Cell_6_Internal_Resistance : 16;
    uint16_t Cell_7_Internal_Resistance : 16;
    uint16_t Cell_8_Internal_Resistance : 16;
} M_Battery_IR_Data_2_t;

typedef struct {
    uint16_t Cell_9_Internal_Resistance : 16;
    uint16_t Cell_10_Internal_Resistance : 16;
    uint16_t Cell_11_Internal_Resistance : 16;
    uint16_t Cell_12_Internal_Resistance : 16;
} M_Battery_IR_Data_3_t;

typedef struct {
    uint16_t Cell_13_Internal_Resistance : 16;
    uint16_t Cell_14_Internal_Resistance : 16;
    uint16_t Cell_15_Internal_Resistance : 16;
    uint16_t Cell_16_Internal_Resistance : 16;
} M_Battery_IR_Data_4_t;

typedef struct {
    uint8_t BMS_Charge_Mode : 8;
    uint16_t Charge_Demand_Voltage : 16;
    uint16_t Charge_Demand_Current : 16;
} M_Battery_Charging_Data_1_t;

typedef struct {
    uint64_t RTC_Date : 48;
} M_Battery_Data_3_t;

typedef struct {
    uint64_t RTC_Time : 48;
} M_Battery_Data_4_t;

typedef struct {
    uint8_t BMS_Modes : 4;
    uint8_t Contactor_State : 4;
    uint8_t Prechg_Cont_Cmd : 1;
    uint8_t Chg_Cont_Cmd : 1;
    uint8_t DisChg_Cont_Cmd : 1;
    uint16_t Dishcarge_Cycle_Count : 16;
    uint16_t Charge_Cycle_Count : 16;
} M_Battery_Data_5_t;

typedef struct {
    uint8_t BMS_CutOff : 1;
    uint8_t PreCharge_Err_Short : 1;
    uint8_t Precharge_Fail : 1;
    uint8_t Precharge_Fail_Perm : 1;
    uint8_t Main_Connection_Err : 1;
    uint8_t Dis_Connection_Err : 1;
    uint8_t Cell_Ovr_Voltage_Err : 1;
    uint8_t Cell_Und_Voltage_Err : 1;
    uint8_t Cell_Ovr_Voltage_Perm : 1;
    uint8_t Cell_Und_Voltage_Perm : 1;
    uint8_t Short_Circuit_Err : 1;
    uint8_t Short_Circuit_Perm : 1;
    uint8_t Over_Temp_Perm : 1;
    uint8_t PDU_Temp_Err : 1;
    uint8_t Chg_Ovr_Vol_Warn : 1;
    uint8_t Chg_Ovr_Vol_Err : 1;
    uint8_t Chg_Ovr_Vol_Perm : 1;
    uint8_t Chg_Und_Vol_Warn : 1;
    uint8_t Chg_OvrTemp_Warn : 1;
    uint8_t Dis_OvrTemp_Warn : 1;
    uint8_t Dis_OvrTemp_Err : 1;
    uint8_t Charge_CutOff : 1;
    uint8_t Dis_CutOff : 1;
    uint8_t Batt_TempRise_Perm : 1;
    uint8_t PDU_TempRise_Perm : 1;
    uint8_t Therm_RunAway_CutOFF : 1;
    uint8_t Ther_RunAway_Alert : 1;
} M_Battery_Fault_Data_t;

typedef struct {
    uint16_t Cell_1_OCV : 16;
    uint16_t Cell_2_OCV : 16;
    uint16_t Cell_3_OCV : 16;
    uint16_t Cell_4_OCV : 16;
} M_Battery_OCV_Data1_t;

typedef struct {
    uint16_t Cell_5_OCV : 16;
    uint16_t Cell_6_OCV : 16;
    uint16_t Cell_7_OCV : 16;
    uint16_t Cell_8_OCV : 16;
} M_Battery_OCV_Data2_t;

typedef struct {
    uint16_t Cell_9_OCV : 16;
    uint16_t Cell_10_OCV : 16;
    uint16_t Cell_11_OCV : 16;
    uint16_t Cell_12_OCV : 16;
} M_Battery_OCV_Data3_t;

typedef struct {
    uint16_t Cell_13_OCV : 16;
    uint16_t Cell_14_OCV : 16;
    uint16_t Cell_15_OCV : 16;
    uint16_t Cell_16_OCV : 16;
} M_Battery_OCV_Data4_t;

typedef struct {
    uint16_t SoC : 16;
    uint64_t Unique_ID : 48;
} S_Data_t;

typedef struct {
    uint16_t Cell_Voltage_1 : 16;
    uint16_t Cell_Voltage_2 : 16;
    uint16_t Cell_Voltage_3 : 16;
    uint16_t Cell_Voltage_4 : 16;
} S_Battery_Voltage_Data1_t;

typedef struct {
    uint16_t Cell_Voltage_5 : 16;
    uint16_t Cell_Voltage_6 : 16;
    uint16_t Cell_Voltage_7 : 16;
    uint16_t Cell_Voltage_8 : 16;
} S_Battery_Voltage_Data2_t;

typedef struct {
    uint16_t Cell_Voltage_9 : 16;
    uint16_t Cell_Voltage_10 : 16;
    uint16_t Cell_Voltage_11 : 16;
    uint16_t Cell_Voltage_12 : 16;
} S_Battery_Voltage_Data3_t;

typedef struct {
    uint16_t Cell_Voltage_13 : 16;
    uint16_t Cell_Voltage_14 : 16;
    uint16_t Cell_Voltage_15 : 16;
    uint16_t Cell_Voltage_16 : 16;
} S_Battery_Voltage_Data4_t;

typedef struct {
    uint16_t Max_Cell_Voltage : 16;
    uint16_t Min_Cell_Voltage : 16;
} S_Max_Min_Cell_Voltage_t;

typedef struct {
    uint16_t PDU_Temperature_AFE : 16;
    uint16_t PDU_Temperature_BMS : 16;
} S_Battery_PDU_Temp_Data_t;

typedef struct {
    uint16_t Balancing_Temperature_AFE : 16;
    uint16_t Battery_Pack_Effective_Temp : 16;
} S_Battery_Temp_Data_1_t;

typedef struct {
    uint16_t Battery_Pack_Temp_Sensor_1 : 16;
    uint16_t Battery_Pack_Temp_Sensor_2 : 16;
} S_Battery_Temp_Data_2_t;

typedef struct {
    uint16_t Battery_Pack_Temp_Sensor_3 : 16;
    uint16_t Battery_Pack_Temp_Sensor_4 : 16;
} S_Battery_Temp_Data_3_t;

typedef struct {
    uint8_t BMS_IN_Supply_9V : 1;
    uint8_t BMS_IN_Supply_12V : 1;
    uint8_t BMS_IN_AFE_Fault : 1;
    uint8_t BMS_IN_Charge_Overcurrent : 1;
    uint8_t BMS_IN_Discharge_Overcurrent : 1;
    uint8_t BMS_IN_PlugSense : 1;
    uint8_t BMS_Out_Status : 1;
    uint8_t BMS_Out_12VEnable : 1;
    uint8_t BMS_Out_9VEnable : 1;
    uint8_t BMS_Out_5VEnable : 1;
    uint8_t BMS_Out_Gate_Driver_Enable : 1;
    uint8_t BMS_Out_Charge_FET_Enable : 1;
    uint8_t BMS_Out_Discharge_FET_Enable : 1;
    uint8_t BMS_Out_Precharge_FET_Enable : 1;
    uint8_t BMS_Out_AFE_Reset : 1;
    uint8_t BMS_Out_Overload_Clear : 1;
    uint8_t BMS_Out_3_3VEnable : 1;
    uint8_t BMS_SlowChg_Auth : 1;
    uint8_t BMS_SlowChg_Status : 1;
    uint8_t Cell1_Balancing_Status : 1;
    uint8_t Cell2_Balancing_Status : 1;
    uint8_t Cell3_Balancing_Status : 1;
    uint8_t Cell4_Balancing_Status : 1;
    uint8_t Cell5_Balancing_Status : 1;
    uint8_t Cell6_Balancing_Status : 1;
    uint8_t Cell7_Balancing_Status : 1;
    uint8_t Cell8_Balancing_Status : 1;
    uint8_t Cell9_Balancing_Status : 1;
    uint8_t Cell10_Balancing_Status : 1;
    uint8_t Cell11_Balancing_Status : 1;
    uint8_t Cell12_Balancing_Status : 1;
    uint8_t Cell13_Balancing_Status : 1;
    uint8_t Cell14_Balancing_Status : 1;
    uint8_t Cell15_Balancing_Status : 1;
    uint8_t Cell16_Balancing_Status : 1;
} S_BMS_Status_Data_1_t;

typedef struct {
    uint16_t Discharge_Current_Limit : 16;
    uint16_t Regenerative_Current_Limit : 16;
} S_Current_Limit_Data_t;

typedef struct {
    uint16_t Battery_Pack_Current : 16;
    uint16_t Battery_Pack_Voltage : 16;
} S_Battery_Pack_V_I_t;

typedef struct {
    uint16_t SoC : 16;
    uint16_t SoH : 16;
    uint16_t Bus_Voltage : 16;
    uint16_t Time_To_Charge : 16;
} S_Battery_Data_1_t;

typedef struct {
    uint16_t Cell_Voltage_deviation : 16;
    uint16_t Cycle_Number : 16;
    uint16_t AmpHr_Accumulated : 16;
    uint16_t KwHr_Accumulated : 16;
} S_Battery_Data_2_t;

typedef struct {
    uint16_t Cell_1_Internal_Resistance : 16;
    uint16_t Cell_2_Internal_Resistance : 16;
    uint16_t Cell_3_Internal_Resistance : 16;
    uint16_t Cell_4_Internal_Resistance : 16;
} S_Battery_IR_Data_1_t;

typedef struct {
    uint16_t Cell_5_Internal_Resistance : 16;
    uint16_t Cell_6_Internal_Resistance : 16;
    uint16_t Cell_7_Internal_Resistance : 16;
    uint16_t Cell_8_Internal_Resistance : 16;
} S_Battery_IR_Data_2_t;

typedef struct {
    uint16_t Cell_9_Internal_Resistance : 16;
    uint16_t Cell_10_Internal_Resistance : 16;
    uint16_t Cell_11_Internal_Resistance : 16;
    uint16_t Cell_12_Internal_Resistance : 16;
} S_Battery_IR_Data_3_t;

typedef struct {
    uint16_t Cell_13_Internal_Resistance : 16;
    uint16_t Cell_14_Internal_Resistance : 16;
    uint16_t Cell_15_Internal_Resistance : 16;
    uint16_t Cell_16_Internal_Resistance : 16;
} S_Battery_IR_Data_4_t;

typedef struct {
    uint8_t BMS_Charge_Mode : 8;
    uint16_t Charge_Demand_Voltage : 16;
    uint16_t Charge_Demand_Current : 16;
} S_Battery_Charging_Data_1_t;

typedef struct {
    uint64_t RTC_Date : 48;
} S_Battery_Data_3_t;

typedef struct {
    uint64_t RTC_Time : 48;
} S_Battery_Data_4_t;

typedef struct {
    uint8_t BMS_Modes : 4;
    uint8_t Contactor_State : 4;
    uint8_t Prechg_Cont_Cmd : 1;
    uint8_t Chg_Cont_Cmd : 1;
    uint8_t DisChg_Cont_Cmd : 1;
} S_Battery_Data_5_t;

typedef struct {
    uint8_t BMS_CutOff : 1;
    uint8_t PreCharge_Err_Short : 1;
    uint8_t Precharge_Fail : 1;
    uint8_t Precharge_Fail_Perm : 1;
    uint8_t Main_Connection_Err : 1;
    uint8_t Dis_Connection_Err : 1;
    uint8_t Cell_Ovr_Voltage : 1;
    uint8_t Cell_Und_Voltage : 1;
    uint8_t Cell_Ovr_Voltage_Perm : 1;
    uint8_t Cell_Und_Voltage_Perm : 1;
    uint8_t Short_Circuit_Err : 1;
    uint8_t Short_Circuit_Perm : 1;
    uint8_t Over_Temp_Perm : 1;
    uint8_t PDU_Temp_Err : 1;
    uint8_t Chg_Ovr_Vol_Warn : 1;
    uint8_t Chg_Ovr_Vol_Err : 1;
    uint8_t Chg_Ovr_Vol_Perm : 1;
    uint8_t Chg_Und_Vol_Warn : 1;
    uint8_t Chg_OvrTemp_Warn : 1;
    uint8_t Dis_OvrTemp_Warn : 1;
    uint8_t Dis_OvrTemp_Err : 1;
    uint8_t Charge_CutOff : 1;
    uint8_t Dis_CutOff : 1;
    uint8_t Batt_TempRise_Perm : 1;
    uint8_t PDU_TempRise_Perm : 1;
    uint8_t Therm_RunAway_CutOFF : 1;
    uint8_t Ther_RunAway_Alert : 1;
} S_Battery_Fault_Data_t;

typedef struct {
    uint16_t Cell_1_OCV : 16;
    uint16_t Cell_2_OCV : 16;
    uint16_t Cell_3_OCV : 16;
    uint16_t Cell_4_OCV : 16;
} S_Battery_OCV_Data1_t;

typedef struct {
    uint16_t Cell_5_OCV : 16;
    uint16_t Cell_6_OCV : 16;
    uint16_t Cell_7_OCV : 16;
    uint16_t Cell_8_OCV : 16;
} S_Battery_OCV_Data2_t;

typedef struct {
    uint16_t Cell_9_OCV : 16;
    uint16_t Cell_10_OCV : 16;
    uint16_t Cell_11_OCV : 16;
    uint16_t Cell_12_OCV : 16;
} S_Battery_OCV_Data3_t;

typedef struct {
    uint16_t Cell_13_OCV : 16;
    uint16_t Cell_14_OCV : 16;
    uint16_t Cell_15_OCV : 16;
    uint16_t Cell_16_OCV : 16;
} S_Battery_OCV_Data4_t;

typedef struct {
    uint8_t Short_Circuit : 1;
    uint8_t Open_Circuit : 1;
    uint8_t Over_Current : 1;
    uint8_t MCU_Over_Temperature : 1;
    uint8_t Over_Voltage : 1;
    uint8_t Under_Voltage : 1;
    uint8_t Motor_Hall_Sensor_Error : 1;
    uint8_t Motor_Unint_AccDeacc : 1;
    uint8_t Motor_OvrSpeed : 1;
    uint8_t Motor_Over_Temperature : 1;
    uint8_t Throttle_Error : 1;
    uint8_t MCU_Low_Voltage_Err : 1;
    uint8_t MCU_High_Voltage_Err : 1;
} MCU_Fault_Data_t;

typedef struct {
    uint8_t Drive_Modes : 4;
    uint8_t Charge_CutOff : 1;
    uint8_t SideStand_Status : 1;
    uint8_t BrakeSwitch_Status : 1;
    uint8_t Regen_State : 1;
    uint16_t Vehicle_Speed : 16;
    uint16_t Motor_RPM : 16;
} MCU_Data_t;

typedef struct {
    uint32_t Vehicle_Odo_Data : 32;
    uint32_t Trip_Odo_Data : 32;
} MCU_Odo_Data_t;

typedef struct {
    int16_t Controller_Temp_Data : 16;
    int16_t Motor_Temp_Data : 16;
} MCU_Temp_Data_t;

typedef struct {
    uint16_t Charger_Out_Voltage : 16;
    uint32_t Charger_Out_Current : 32;
    uint8_t Charger_Hardware : 1;
    uint8_t Charger_OverTemp : 1;
    uint8_t Charger_Input : 1;
    uint8_t Charger_Ready : 1;
    uint8_t Charger_Start : 1;
    uint8_t Charger_CAN : 1;
} Charger_Data_t;

typedef struct {
    uint8_t VCU_Wakup_Req : 2;
    uint8_t Charge_Connected : 1;
    uint8_t Diagnostic_Flg : 1;
    uint8_t BMS_WakUp_Req : 2;
    uint8_t Vehicle_Mode_L2 : 2;
    uint8_t Ign : 1;
    uint8_t Vehicle_Mode_L3 : 2;
    uint8_t Current_Dir : 1;
    uint8_t Simulation_Enable : 1;
    uint8_t Cell_Fault_UV : 1;
    uint8_t Slm_Charger_Volt_Enable_Flag : 1;
    uint8_t Cell_Fault_OV : 1;
    uint16_t Current_Sim_Value : 16;
    uint8_t Voltage_Fault_Enable : 1;
    uint8_t Sim_Charger_Current_Req_Flg : 1;
    uint8_t Temp_Fault_Enable : 1;
    uint8_t Und_Temp_Enable : 1;
    uint8_t Ovr_Temp_Enable : 1;
    uint8_t Direct_Enable : 1;
    uint8_t Discharge_Mode : 1;
    uint8_t Sim_BMS_Char_Curr_Req : 8;
    uint16_t Sim_Charger_Volt_Req : 10;
} Send_VCU_Cmd_t;

void encode_M_Data(const M_Data_t* msg, uint8_t* data);
void encode_M_Battery_Voltage_Data1(const M_Battery_Voltage_Data1_t* msg, uint8_t* data);
void encode_M_Battery_Voltage_Data2(const M_Battery_Voltage_Data2_t* msg, uint8_t* data);
void encode_M_Battery_Voltage_Data3(const M_Battery_Voltage_Data3_t* msg, uint8_t* data);
void encode_M_Battery_Voltage_Data4(const M_Battery_Voltage_Data4_t* msg, uint8_t* data);
void encode_M_Max_Min_Cell_Voltage(const M_Max_Min_Cell_Voltage_t* msg, uint8_t* data);
void encode_M_Battery_PDU_Temp_Data(const M_Battery_PDU_Temp_Data_t* msg, uint8_t* data);
void encode_M_Battery_Temp_Data_1(const M_Battery_Temp_Data_1_t* msg, uint8_t* data);
void encode_M_Battery_Temp_Data_2(const M_Battery_Temp_Data_2_t* msg, uint8_t* data);
void encode_M_Battery_Temp_Data_3(const M_Battery_Temp_Data_3_t* msg, uint8_t* data);
void encode_M_BMS_Status_Data_1(const M_BMS_Status_Data_1_t* msg, uint8_t* data);
void encode_M_Current_Limit_Data(const M_Current_Limit_Data_t* msg, uint8_t* data);
void encode_M_Battery_Pack_V_I(const M_Battery_Pack_V_I_t* msg, uint8_t* data);
void encode_M_Battery_Data_1(const M_Battery_Data_1_t* msg, uint8_t* data);
void encode_M_Battery_Data_2(const M_Battery_Data_2_t* msg, uint8_t* data);
void encode_M_Battery_IR_Data_1(const M_Battery_IR_Data_1_t* msg, uint8_t* data);
void encode_M_Battery_IR_Data_2(const M_Battery_IR_Data_2_t* msg, uint8_t* data);
void encode_M_Battery_IR_Data_3(const M_Battery_IR_Data_3_t* msg, uint8_t* data);
void encode_M_Battery_IR_Data_4(const M_Battery_IR_Data_4_t* msg, uint8_t* data);
void encode_M_Battery_Charging_Data_1(const M_Battery_Charging_Data_1_t* msg, uint8_t* data);
void encode_M_Battery_Data_3(const M_Battery_Data_3_t* msg, uint8_t* data);
void encode_M_Battery_Data_4(const M_Battery_Data_4_t* msg, uint8_t* data);
void encode_M_Battery_Data_5(const M_Battery_Data_5_t* msg, uint8_t* data);
void encode_M_Battery_Fault_Data(const M_Battery_Fault_Data_t* msg, uint8_t* data);
void encode_M_Battery_OCV_Data1(const M_Battery_OCV_Data1_t* msg, uint8_t* data);
void encode_M_Battery_OCV_Data2(const M_Battery_OCV_Data2_t* msg, uint8_t* data);
void encode_M_Battery_OCV_Data3(const M_Battery_OCV_Data3_t* msg, uint8_t* data);
void encode_M_Battery_OCV_Data4(const M_Battery_OCV_Data4_t* msg, uint8_t* data);
void encode_S_Data(const S_Data_t* msg, uint8_t* data);
void encode_S_Battery_Voltage_Data1(const S_Battery_Voltage_Data1_t* msg, uint8_t* data);
void encode_S_Battery_Voltage_Data2(const S_Battery_Voltage_Data2_t* msg, uint8_t* data);
void encode_S_Battery_Voltage_Data3(const S_Battery_Voltage_Data3_t* msg, uint8_t* data);
void encode_S_Battery_Voltage_Data4(const S_Battery_Voltage_Data4_t* msg, uint8_t* data);
void encode_S_Max_Min_Cell_Voltage(const S_Max_Min_Cell_Voltage_t* msg, uint8_t* data);
void encode_S_Battery_PDU_Temp_Data(const S_Battery_PDU_Temp_Data_t* msg, uint8_t* data);
void encode_S_Battery_Temp_Data_1(const S_Battery_Temp_Data_1_t* msg, uint8_t* data);
void encode_S_Battery_Temp_Data_2(const S_Battery_Temp_Data_2_t* msg, uint8_t* data);
void encode_S_Battery_Temp_Data_3(const S_Battery_Temp_Data_3_t* msg, uint8_t* data);
void encode_S_BMS_Status_Data_1(const S_BMS_Status_Data_1_t* msg, uint8_t* data);
void encode_S_Current_Limit_Data(const S_Current_Limit_Data_t* msg, uint8_t* data);
void encode_S_Battery_Pack_V_I(const S_Battery_Pack_V_I_t* msg, uint8_t* data);
void encode_S_Battery_Data_1(const S_Battery_Data_1_t* msg, uint8_t* data);
void encode_S_Battery_Data_2(const S_Battery_Data_2_t* msg, uint8_t* data);
void encode_S_Battery_IR_Data_1(const S_Battery_IR_Data_1_t* msg, uint8_t* data);
void encode_S_Battery_IR_Data_2(const S_Battery_IR_Data_2_t* msg, uint8_t* data);
void encode_S_Battery_IR_Data_3(const S_Battery_IR_Data_3_t* msg, uint8_t* data);
void encode_S_Battery_IR_Data_4(const S_Battery_IR_Data_4_t* msg, uint8_t* data);
void encode_S_Battery_Charging_Data_1(const S_Battery_Charging_Data_1_t* msg, uint8_t* data);
void encode_S_Battery_Data_3(const S_Battery_Data_3_t* msg, uint8_t* data);
void encode_S_Battery_Data_4(const S_Battery_Data_4_t* msg, uint8_t* data);
void encode_S_Battery_Data_5(const S_Battery_Data_5_t* msg, uint8_t* data);
void encode_S_Battery_Fault_Data(const S_Battery_Fault_Data_t* msg, uint8_t* data);
void encode_S_Battery_OCV_Data1(const S_Battery_OCV_Data1_t* msg, uint8_t* data);
void encode_S_Battery_OCV_Data2(const S_Battery_OCV_Data2_t* msg, uint8_t* data);
void encode_S_Battery_OCV_Data3(const S_Battery_OCV_Data3_t* msg, uint8_t* data);
void encode_S_Battery_OCV_Data4(const S_Battery_OCV_Data4_t* msg, uint8_t* data);
void encode_MCU_Fault_Data(const MCU_Fault_Data_t* msg, uint8_t* data);
void encode_MCU_Data(const MCU_Data_t* msg, uint8_t* data);
void encode_MCU_Odo_Data(const MCU_Odo_Data_t* msg, uint8_t* data);
void encode_MCU_Temp_Data(const MCU_Temp_Data_t* msg, uint8_t* data);
void encode_Charger_Data(const Charger_Data_t* msg, uint8_t* data);
void encode_Send_VCU_Cmd(const Send_VCU_Cmd_t* msg, uint8_t* data);

void decode_M_Data(const uint8_t* data, M_Data_t* msg);
void decode_M_Battery_Voltage_Data1(const uint8_t* data, M_Battery_Voltage_Data1_t* msg);
void decode_M_Battery_Voltage_Data2(const uint8_t* data, M_Battery_Voltage_Data2_t* msg);
void decode_M_Battery_Voltage_Data3(const uint8_t* data, M_Battery_Voltage_Data3_t* msg);
void decode_M_Battery_Voltage_Data4(const uint8_t* data, M_Battery_Voltage_Data4_t* msg);
void decode_M_Max_Min_Cell_Voltage(const uint8_t* data, M_Max_Min_Cell_Voltage_t* msg);
void decode_M_Battery_PDU_Temp_Data(const uint8_t* data, M_Battery_PDU_Temp_Data_t* msg);
void decode_M_Battery_Temp_Data_1(const uint8_t* data, M_Battery_Temp_Data_1_t* msg);
void decode_M_Battery_Temp_Data_2(const uint8_t* data, M_Battery_Temp_Data_2_t* msg);
void decode_M_Battery_Temp_Data_3(const uint8_t* data, M_Battery_Temp_Data_3_t* msg);
void decode_M_BMS_Status_Data_1(const uint8_t* data, M_BMS_Status_Data_1_t* msg);
void decode_M_Current_Limit_Data(const uint8_t* data, M_Current_Limit_Data_t* msg);
void decode_M_Battery_Pack_V_I(const uint8_t* data, M_Battery_Pack_V_I_t* msg);
void decode_M_Battery_Data_1(const uint8_t* data, M_Battery_Data_1_t* msg);
void decode_M_Battery_Data_2(const uint8_t* data, M_Battery_Data_2_t* msg);
void decode_M_Battery_IR_Data_1(const uint8_t* data, M_Battery_IR_Data_1_t* msg);
void decode_M_Battery_IR_Data_2(const uint8_t* data, M_Battery_IR_Data_2_t* msg);
void decode_M_Battery_IR_Data_3(const uint8_t* data, M_Battery_IR_Data_3_t* msg);
void decode_M_Battery_IR_Data_4(const uint8_t* data, M_Battery_IR_Data_4_t* msg);
void decode_M_Battery_Charging_Data_1(const uint8_t* data, M_Battery_Charging_Data_1_t* msg);
void decode_M_Battery_Data_3(const uint8_t* data, M_Battery_Data_3_t* msg);
void decode_M_Battery_Data_4(const uint8_t* data, M_Battery_Data_4_t* msg);
void decode_M_Battery_Data_5(const uint8_t* data, M_Battery_Data_5_t* msg);
void decode_M_Battery_Fault_Data(const uint8_t* data, M_Battery_Fault_Data_t* msg);
void decode_M_Battery_OCV_Data1(const uint8_t* data, M_Battery_OCV_Data1_t* msg);
void decode_M_Battery_OCV_Data2(const uint8_t* data, M_Battery_OCV_Data2_t* msg);
void decode_M_Battery_OCV_Data3(const uint8_t* data, M_Battery_OCV_Data3_t* msg);
void decode_M_Battery_OCV_Data4(const uint8_t* data, M_Battery_OCV_Data4_t* msg);
void decode_S_Data(const uint8_t* data, S_Data_t* msg);
void decode_S_Battery_Voltage_Data1(const uint8_t* data, S_Battery_Voltage_Data1_t* msg);
void decode_S_Battery_Voltage_Data2(const uint8_t* data, S_Battery_Voltage_Data2_t* msg);
void decode_S_Battery_Voltage_Data3(const uint8_t* data, S_Battery_Voltage_Data3_t* msg);
void decode_S_Battery_Voltage_Data4(const uint8_t* data, S_Battery_Voltage_Data4_t* msg);
void decode_S_Max_Min_Cell_Voltage(const uint8_t* data, S_Max_Min_Cell_Voltage_t* msg);
void decode_S_Battery_PDU_Temp_Data(const uint8_t* data, S_Battery_PDU_Temp_Data_t* msg);
void decode_S_Battery_Temp_Data_1(const uint8_t* data, S_Battery_Temp_Data_1_t* msg);
void decode_S_Battery_Temp_Data_2(const uint8_t* data, S_Battery_Temp_Data_2_t* msg);
void decode_S_Battery_Temp_Data_3(const uint8_t* data, S_Battery_Temp_Data_3_t* msg);
void decode_S_BMS_Status_Data_1(const uint8_t* data, S_BMS_Status_Data_1_t* msg);
void decode_S_Current_Limit_Data(const uint8_t* data, S_Current_Limit_Data_t* msg);
void decode_S_Battery_Pack_V_I(const uint8_t* data, S_Battery_Pack_V_I_t* msg);
void decode_S_Battery_Data_1(const uint8_t* data, S_Battery_Data_1_t* msg);
void decode_S_Battery_Data_2(const uint8_t* data, S_Battery_Data_2_t* msg);
void decode_S_Battery_IR_Data_1(const uint8_t* data, S_Battery_IR_Data_1_t* msg);
void decode_S_Battery_IR_Data_2(const uint8_t* data, S_Battery_IR_Data_2_t* msg);
void decode_S_Battery_IR_Data_3(const uint8_t* data, S_Battery_IR_Data_3_t* msg);
void decode_S_Battery_IR_Data_4(const uint8_t* data, S_Battery_IR_Data_4_t* msg);
void decode_S_Battery_Charging_Data_1(const uint8_t* data, S_Battery_Charging_Data_1_t* msg);
void decode_S_Battery_Data_3(const uint8_t* data, S_Battery_Data_3_t* msg);
void decode_S_Battery_Data_4(const uint8_t* data, S_Battery_Data_4_t* msg);
void decode_S_Battery_Data_5(const uint8_t* data, S_Battery_Data_5_t* msg);
void decode_S_Battery_Fault_Data(const uint8_t* data, S_Battery_Fault_Data_t* msg);
void decode_S_Battery_OCV_Data1(const uint8_t* data, S_Battery_OCV_Data1_t* msg);
void decode_S_Battery_OCV_Data2(const uint8_t* data, S_Battery_OCV_Data2_t* msg);
void decode_S_Battery_OCV_Data3(const uint8_t* data, S_Battery_OCV_Data3_t* msg);
void decode_S_Battery_OCV_Data4(const uint8_t* data, S_Battery_OCV_Data4_t* msg);
void decode_MCU_Fault_Data(const uint8_t* data, MCU_Fault_Data_t* msg);
void decode_MCU_Data(const uint8_t* data, MCU_Data_t* msg);
void decode_MCU_Odo_Data(const uint8_t* data, MCU_Odo_Data_t* msg);
void decode_MCU_Temp_Data(const uint8_t* data, MCU_Temp_Data_t* msg);
void decode_Charger_Data(const uint8_t* data, Charger_Data_t* msg);
void decode_Send_VCU_Cmd(const uint8_t* data, Send_VCU_Cmd_t* msg);

#endif // CAN_MESSAGES_H
