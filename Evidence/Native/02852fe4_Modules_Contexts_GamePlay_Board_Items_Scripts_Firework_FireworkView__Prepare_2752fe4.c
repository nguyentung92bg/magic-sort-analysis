/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t fireworkCount, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__Prepare_2752fe4
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if ((bRam0000000005c2c718 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581af68);
    bRam0000000005c2c718 = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SetSorting_275545c
            (param_1,param_2,param_3);
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
    }
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),1,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(param_1 + 0x40),0);
          puVar2 = PTR_DAT_05805c10;
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != 0) {
            uVar3 = *(uint *)(lVar4 + 0x18);
            if (0 < (int)uVar3) {
              uVar8 = 0;
              do {
                if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                lVar9 = *(long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_02853238;
                lVar7 = *(long *)(lVar9 + 0x10);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(puVar2);
                  cRam0000000005c230aa = '\x01';
                }
                if (lVar7 == 0) goto LAB_02853238;
                puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                UnityEngine_Transform__set_localPosition_4092ce0
                          (*puVar5,puVar5[1],puVar5[2],lVar7,0);
                lVar7 = *(long *)(lVar9 + 0x10);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(puVar2);
                  cRam0000000005c230aa = '\x01';
                }
                if (lVar7 == 0) goto LAB_02853238;
                puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
                UnityEngine_Transform__set_localEulerAngles_4092f0c
                          (*puVar5,puVar5[1],puVar5[2],lVar7,0);
                lVar7 = *(long *)(lVar9 + 0x10);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(puVar2);
                  cRam0000000005c230a9 = '\x01';
                }
                if (lVar7 == 0) goto LAB_02853238;
                lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                           *(undefined4 *)(lVar6 + 0x14),lVar7,0);
                if ((*(long *)(lVar9 + 0x10) == 0) ||
                   (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar9 + 0x10),0)
                   , lVar7 == 0)) goto LAB_02853238;
                UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                if (*(long *)(lVar9 + 0x18) == 0) goto LAB_02853238;
                UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar9 + 0x18),0,0);
                if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02853238;
                UnityEngine_Renderer__set_enabled_40822b8(*(long *)(lVar9 + 0x28),1,0);
                if (*(long *)(lVar9 + 0x20) == 0) goto LAB_02853238;
                UnityEngine_ParticleSystem__Stop_3abc6a4(*(long *)(lVar9 + 0x20),0);
                uVar3 = *(uint *)(lVar4 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)uVar3);
            }
            Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SetActiveFireworks_27554a0
                      (param_1,param_4);
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 != 0) {
              uVar3 = *(uint *)(lVar4 + 0x18);
              if (0 < (int)uVar3) {
                uVar8 = 0;
                do {
                  if (uVar3 <= uVar8) goto LAB_028558a0;
                  lVar9 = *(long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
                  if (lVar9 == 0) goto LAB_028558a4;
                  UnityEngine_GameObject__SetActive_408e318(lVar9,param_4 < 1,0);
                  uVar3 = *(uint *)(lVar4 + 0x18);
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)uVar3);
              }
              if (param_4 == 2) {
                lVar4 = *(long *)(param_1 + 0x48);
                if (lVar4 == 0) goto LAB_028558a4;
                if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_028558a0;
                lVar4 = *(long *)(lVar4 + 0x28);
              }
              else {
                if (param_4 != 1) {
                  return;
                }
                lVar4 = *(long *)(param_1 + 0x48);
                if (lVar4 == 0) goto LAB_028558a4;
                if (*(int *)(lVar4 + 0x18) == 0) {
LAB_028558a0:
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                lVar4 = *(long *)(lVar4 + 0x20);
              }
              if (lVar4 != 0) {
                if (pcRam0000000005c3a388 == (code *)0x0) {
                  pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c3a388)(lVar4,1);
                return;
              }
            }
LAB_028558a4:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
LAB_02853238:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

