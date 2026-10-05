# HerlynOS Coding & Naming Convention
> This naming convention references FreeRTOS native variable/function prefix rules, to unify code style and improve readability for the project.

## Prefix for Functions & Variables
| Prefix | Meaning | Example |
| ---- | ---- | ---- |
| `v` | Returns `void` (no return value) | `vTaskDelete`, `vQueueReset` |
| `x` | Returns `HER_StatusTypeDef` (status code, HER_OK / HER_ERR) | `xBMI270_Init`, `xQueueSend` |
| `b` | Returns `HER_BoolDef` (boolean, HER_TRUE / HER_FALSE) | `bBMI270_CheckWristWakeUp` |
| `uc` | `HER_UInt8Def`, unsigned 8-bit integer | `ucRegVal` |
| `us` | `HER_UInt16Def`, unsigned 16-bit integer | `usSampleCnt` |
| `ul` | `HER_UInt32Def`, unsigned 32-bit integer | `ulTick` |
| `ull` | `HER_UInt64Def`, unsigned 64-bit integer | `ullTimeStamp` |
| `c` | `HER_Int8Def`, signed 8-bit integer | `cTemp` |
| `s` | `HER_Int16Def`, signed 16-bit integer | `sAccX` |
| `l` | `HER_Int32Def`, signed 32-bit integer | `lOffset` |
| `ll` | `HER_Int64Def`, signed 64-bit integer | `llPreciseTime` |
| `f` | `HER_Float32Def`, single-precision float | `fGravity` |
| `d` | `HER_Float64Def`, double-precision float | `dPrecision` |
| `pv` | Generic `void*` pointer | `pvPortMalloc` |
| `pc` | `HER_CharDef*` / char string pointer | `pcMsg` |
| `px` | Pointer to struct / handle | `pxBMI270Handle` |
| `e` | Enum type | `eTaskState` |

## Brief Naming Rules
1. **Function prefix** is determined by the **return type**, not function parameters.
   - Return `void` → prefix `v`
   - Return `HER_StatusTypeDef` → prefix `x`
   - Return `HER_BoolDef` → prefix `b`
2. **Variable prefix** is determined by the variable's own data type.
3. CamelCase:
   - UpperCamelCase for types / structs
   - lowerCamelCase for functions and variables
4. Module prefix: add module namespace prefix, e.g. `xAppActionInit`, `vSpiDmaStart`.

### Code Examples
```c
// void return → prefix v
void vAppActionInit(void);

// HER_StatusTypeDef return → prefix x
HER_StatusTypeDef xAppActionInit(void);

// HER_BoolDef return → prefix b
HER_BoolDef bAppIsReady(void);

// Variables
HER_UInt8Def  ucRegVal = 0x01;
HER_UInt16Def usSampleCnt = 1024;
HER_UInt32Def ulTick = 10000;
HER_UInt64Def ullTimeStamp = 0;

HER_Int8Def  cTemp = -10;
HER_Int16Def sAccX = 1234;
HER_Int32Def lOffset = -5000;
HER_Int64Def llPreciseTime = 0;

HER_Float32Def fGravity = 9.81f;
HER_Float64Def dPrecision = 3.1415926;

HER_BoolDef bIsWristUp = HER_FALSE;
HER_StatusTypeDef xRet;

HER_CharDef cCh = 'A';
HER_StringDef pcMsg = "HerlynWatch";

// Fixed-length char array (array uses uc prefix, NOT pc)
HER_String32Def ucBuf32;
