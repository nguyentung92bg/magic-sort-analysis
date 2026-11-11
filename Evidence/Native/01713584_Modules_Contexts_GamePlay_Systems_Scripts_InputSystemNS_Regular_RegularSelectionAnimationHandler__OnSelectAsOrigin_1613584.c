/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnSelectAsOrigin
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsOrigin (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$OnSelectAsOrigin
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsOrigin
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__OnSelectAsOrigin_1613584
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  if ((bRam0000000005c24490 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057ddea8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057a9798);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24490 = 1;
  }
  if ((param_5 != 0) && (lVar9 = *(long *)(param_5 + 0x10), lVar9 != 0)) {
    lVar10 = *(long *)(param_5 + 0x28);
    plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                               (lVar9,0);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01713684;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,0);
LAB_01713684:
      uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      *(undefined4 *)(param_4 + 0x10) = uVar11;
      *(undefined4 *)(param_4 + 0x14) = param_2;
      *(undefined4 *)(param_4 + 0x18) = param_3;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsOrigin_2496d10
                (lVar9,param_5,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayBottleSelectedAnimation_2495de8
                (lVar9,0);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
      if (lVar10 != 0) {
        lVar6 = *(long *)(lVar9 + 0xa0);
        uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
        fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
        uVar11 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                           (lVar10,0);
        if (lVar6 != 0) {
          fVar12 = (float)BakedFluid_BottleAnimationConfig__BottleSelectionAnimationHeight_3af5644
                                    (lVar6,uVar11,0);
          uVar15 = *(undefined8 *)(param_4 + 0x10);
          fVar16 = *(float *)(param_4 + 0x18);
          uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(lVar9,0);
          if (*(long *)(lVar9 + 0xa0) != 0) {
            uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOMove_23064f0
                               ((float)uVar14 * fVar12 + (float)uVar15,
                                (float)((ulong)uVar14 >> 0x20) * fVar12 +
                                (float)((ulong)uVar15 >> 0x20),fVar13 * fVar12 + fVar16,
                                *(undefined4 *)(*(long *)(lVar9 + 0xa0) + 0x70),uVar5,0,0);
            puVar2 = PTR_DAT_057ddea8;
            puVar1 = PTR_DAT_057b8520;
            if (*(long *)(lVar9 + 0xa0) != 0) {
              uVar14 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                 (uVar14,*(undefined8 *)(*(long *)(lVar9 + 0xa0) + 0x78),
                                  *(undefined8 *)PTR_DAT_057874c0);
              *(undefined8 *)(param_4 + 0x20) = uVar14;
              FUN_012d0d74((undefined8 *)(param_4 + 0x20),uVar14);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                 (*(undefined8 *)puVar2);
              puVar1 = PTR_DAT_057ec790;
              if (lVar10 != 0) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                          (lVar10,lVar9,*(undefined8 *)PTR_DAT_057a9798);
                lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar1);
                if (lVar9 != 0) {
                  if (*(long *)(lVar9 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057871c8 + 0x20) +
                                                    0xc0) + 0x20) + 8))
                              (*(long *)(lVar9 + 0x10),0x18);
                    return;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

