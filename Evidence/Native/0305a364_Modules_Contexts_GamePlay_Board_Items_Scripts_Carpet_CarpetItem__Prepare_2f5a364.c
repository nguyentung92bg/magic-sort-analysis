/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t id, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t id, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__Prepare_2f5a364
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
               undefined4 param_10)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  if ((bRam0000000005c308cc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814978);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c308cc = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_7;
  *(undefined4 *)(param_4 + 0x44) = param_9;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  if (*(long *)(param_4 + 0x58) != 0) {
    System_Collections_Generic_List_object___AddRange_21fcc58
              (*(long *)(param_4 + 0x58),param_8,*(undefined8 *)PTR_DAT_05814978);
    fVar9 = _UNK_04397c80;
    if (*(long *)(param_4 + 0x58) != 0) {
      uVar2 = *(uint *)(*(long *)(param_4 + 0x58) + 0x18);
      *(uint *)(param_4 + 0x68) = uVar2;
      if ((uVar2 & 1) != 0) {
        fVar9 = 0.0;
      }
      if (cRam0000000005c28262 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c28262 = '\x01';
      }
      uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x3c);
      fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x44);
      fVar10 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles_22fade0
                                (0);
      fVar10 = fVar10 * (float)(int)(uVar2 - 1) * 0.5;
      *(ulong *)(param_4 + 0x34) =
           CONCAT44(param_2 + (float)((ulong)uVar11 >> 0x20) * fVar10 + 0.0,
                    fVar9 + param_1 + (float)uVar11 * fVar10);
      *(float *)(param_4 + 0x3c) = param_3 + fVar12 * fVar10 + 0.0;
      if (*(long *)(param_4 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__Prepare_2f5a510
                  (*(long *)(param_4 + 0x48),param_5,param_6,uVar2,param_10);
        lVar5 = *(long *)(param_4 + 0x78);
        if (lVar5 != 0) {
          if ((bRam0000000005c373d4 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057b7f50,param_4,0);
            bRam0000000005c373d4 = 1;
          }
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            lVar8 = *(long *)PTR_DAT_057b7f50;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar5 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                *plVar7 = param_4;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x03e2db1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar5,param_4);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

