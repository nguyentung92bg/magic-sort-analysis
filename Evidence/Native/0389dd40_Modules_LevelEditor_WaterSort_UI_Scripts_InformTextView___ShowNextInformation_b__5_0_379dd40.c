/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.InformTextView$$<ShowNextInformation>b__5_0
void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView___ShowNextInformation_b__5_0 (Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.InformTextView$$<ShowNextInformation>b__5_0
   void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView___ShowNextInformation_b__5_0
   (Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView_o* __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView___ShowNextInformation_b__5_0_379dd40
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000005c33dc5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c0368);
    bRam0000000005c33dc5 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0), lVar6 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x20) < 1) {
        return;
      }
      if ((bRam0000000005c33dc3 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05808fc8);
        FUN_012d0dc8(PTR_DAT_05790590);
        FUN_012d0dc8(PTR_DAT_057606c8);
        bRam0000000005c33dc3 = 1;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
         lVar6 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          plVar7 = *(long **)(param_1 + 0x18);
          uVar5 = System_Collections_Generic_Queue_object___Dequeue_3369080
                            (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_05790590);
          puVar1 = PTR_DAT_057606c8;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar6 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar6,param_1,*(undefined8 *)PTR_DAT_05808fc8,0);
              puVar1 = PTR_DAT_057815e0;
              if ((bRam0000000005c28460 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057815e0,0,0);
                FUN_012d0dc8(PTR_DAT_057d6890);
                FUN_012d0dc8(PTR_DAT_057ca968);
                FUN_012d0dc8(PTR_DAT_057f1100);
                bRam0000000005c28460 = 1;
              }
              puVar4 = PTR_DAT_057f1100;
              puVar3 = PTR_DAT_057d6890;
              puVar2 = PTR_DAT_057ca968;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              DG_Tweening_DOTween__Sequence_1eda154();
              uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(0x40000000);
              uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                                (uVar5,lVar6,*(undefined8 *)puVar3);
              lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                                (uVar5,0,0,*(undefined8 *)puVar4);
              uVar5 = *(undefined8 *)puVar2;
              if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
                 (*(char *)(lVar6 + 0x100) == '\0')) {
                *(undefined1 *)(lVar6 + 0x9c) = 1;
                return;
              }
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

