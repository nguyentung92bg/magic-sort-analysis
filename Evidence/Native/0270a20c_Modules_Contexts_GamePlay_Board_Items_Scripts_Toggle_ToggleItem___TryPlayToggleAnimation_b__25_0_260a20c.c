/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<TryPlayToggleAnimation>b__25_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<TryPlayToggleAnimation>b__25_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_0_260a20c
               (long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar2 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar2,param_1,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      auVar7 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                         (*(long *)(param_1 + 0x60),0,0);
      if (lVar2 != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting_249388c
                  (lVar2,auVar7._0_8_,auVar7._8_8_,0);
        lVar2 = *(long *)(param_1 + 0x48);
        if (lVar2 != 0) {
          bVar1 = *(byte *)(param_1 + 0x58);
          *(byte *)(lVar2 + 0x118) = bVar1 & 1;
          uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__IsToggleAnimationAlreadyPlaying_260a7e8
                            ();
          if ((uVar3 & 1) == 0) {
            if ((bVar1 & 1) == 0) {
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(lVar2 + 0x28);
                uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
                if ((lVar5 != 0) &&
                   (lVar5 = UnityEngine_Animation__get_Item_1f79fb0(lVar5,uVar4,0), lVar5 != 0)) {
                  UnityEngine_AnimationState__set_speed_1f7a570(0xbf800000,lVar5,0);
                  if (*(long *)(lVar2 + 0x20) != 0) {
                    UnityEngine_AnimationState__set_time_1f7a49c
                              (*(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x2c),lVar5,0);
                    if (*(long *)(lVar2 + 0x40) != 0) {
                      lVar5 = *(long *)(lVar2 + 0x28);
                      uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
                      if (lVar5 != 0) goto UnityEngine_Animation__Play_1f7a100;
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*(long *)(lVar2 + 0x40) != 0) {
              lVar5 = *(long *)(lVar2 + 0x28);
              uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
              if ((lVar5 != 0) &&
                 (lVar5 = UnityEngine_Animation__get_Item_1f79fb0(lVar5,uVar4,0), lVar5 != 0)) {
                UnityEngine_AnimationState__set_speed_1f7a570(0x3f800000,lVar5,0);
                if (*(long *)(lVar2 + 0x20) != 0) {
                  UnityEngine_AnimationState__set_time_1f7a49c
                            (*(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x30),lVar5,0);
                  if (*(long *)(lVar2 + 0x40) != 0) {
                    lVar5 = *(long *)(lVar2 + 0x28);
                    uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
                    if (lVar5 != 0) goto UnityEngine_Animation__Play_1f7a100;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lVar2 + 0x40) != 0) {
            lVar5 = *(long *)(lVar2 + 0x28);
            uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
            if ((lVar5 != 0) &&
               (lVar5 = UnityEngine_Animation__get_Item_1f79fb0(lVar5,uVar4,0), lVar5 != 0)) {
              fVar6 = (float)UnityEngine_AnimationState__get_speed_1f7a534(lVar5,0);
              UnityEngine_AnimationState__set_speed_1f7a570(-fVar6,lVar5,0);
              if ((bVar1 & 1) == 0) {
                fVar6 = (float)UnityEngine_AnimationState__get_time_1f7a460(lVar5,0);
                if (*(long *)(lVar2 + 0x20) == 0) goto LAB_0270a8e8;
                if (fVar6 <= *(float *)(*(long *)(lVar2 + 0x20) + 0x34)) {
                  UnityEngine_AnimationState__get_time_1f7a460(lVar5,0);
                }
                UnityEngine_AnimationState__set_time_1f7a49c(lVar5,0);
              }
              if (*(long *)(lVar2 + 0x40) != 0) {
                lVar5 = *(long *)(lVar2 + 0x28);
                uVar4 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar2 + 0x40),0);
                if (lVar5 != 0) {
UnityEngine_Animation__Play_1f7a100:
                  if (pcRam0000000005c28c10 == (code *)0x0) {
                    pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar4,0);
                  }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c28c10)(lVar5,uVar4,0);
                  return;
                }
              }
            }
          }
LAB_0270a8e8:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

