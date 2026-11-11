/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSnitchItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSnitchItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* spawnInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSnitchItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSnitchItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* spawnInfo, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSnitchItem_2f6889c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if ((param_5 != 0) && (*(long *)(param_5 + 0x18) != 0)) {
    fVar4 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                             (*(long *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x10) != 0) {
      if (*(long *)(param_5 + 0x18) != 0) {
        fVar5 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                                 (*(long *)(param_5 + 0x18),
                                  *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x48),0);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_5 + 0x18) != 0) {
          lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          uVar8 = *(undefined8 *)(lVar3 + 0x18);
          fVar6 = (float)uVar8 * fVar5;
          fVar7 = (float)((ulong)uVar8 >> 0x20) * fVar5;
          fVar5 = fVar5 * *(float *)(lVar3 + 0x20);
          fVar4 = fVar4 + fVar6;
          param_2 = param_2 + fVar7;
          uVar9 = CONCAT44(param_2,fVar4);
          param_3 = param_3 + fVar5;
          if (1 < *(int *)(*(long *)(param_5 + 0x18) + 0x40)) {
            lVar3 = *(long *)(param_5 + 0x20);
            if (lVar3 == 0) goto LAB_03068a6c;
            uVar9 = CONCAT44(param_2 + ((float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) -
                                       fVar7),fVar4 + ((float)*(undefined8 *)(lVar3 + 0x10) - fVar6)
                            );
            param_3 = param_3 + (*(float *)(lVar3 + 0x18) - fVar5);
          }
          if ((*(long *)(param_5 + 0x10) != 0) &&
             (lVar3 = *(long *)(*(long *)(param_5 + 0x10) + 0xa0), lVar3 != 0)) {
            if (*(long *)(param_4 + 0x50) != 0) {
              lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
              fVar4 = *(float *)(lVar3 + 0xdc);
              fVar7 = *(float *)(lVar2 + 0x18);
              fVar5 = *(float *)(lVar2 + 0x1c);
              fVar6 = *(float *)(lVar2 + 0x20);
              auVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSnitchItemIdleSorting_4002cc0
                                  (*(long *)(param_4 + 0x50),0,0);
              if (*(long *)(param_5 + 0x18) != 0) {
                lVar3 = *(long *)(param_4 + 0x28);
                uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (*(long *)(param_5 + 0x18),0);
                if (lVar3 != 0) {
                  plVar1 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSnitchItem_230347c
                                             (uVar9,uVar9 >> 0x20,param_3,fVar4 * fVar7,
                                              fVar4 * fVar5,fVar4 * fVar6,lVar3,uVar8,auVar10._0_8_,
                                              auVar10._8_8_,*(undefined8 *)(param_5 + 0x20),
                                              *(undefined8 *)(param_5 + 0x10),param_5,0);
                  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                            (param_4,plVar1);
                  *(long *)(param_5 + 0x40) = (long)plVar1;
                  FUN_012d0d74((long *)(param_5 + 0x40),plVar1);
                  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03068a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar1 + 0x288))(plVar1,*(undefined8 *)(*plVar1 + 0x290));
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03068a6c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

