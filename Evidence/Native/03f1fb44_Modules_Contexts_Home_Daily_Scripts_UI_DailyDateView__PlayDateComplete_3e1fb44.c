/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$PlayDateComplete
DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__PlayDateComplete (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$PlayDateComplete
   DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__PlayDateComplete
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__PlayDateComplete_3e1fb44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
                    /* catch() { ... } // from try @ 03f1fa1c with catch @ 03f1fb44 */
  puVar2 = PTR_DAT_057815e0;
                    /* try { // try from 03f1fb64 to 0401fb67 has its CatchHandler @ 03f1fbf0 */
  if ((bRam0000000005c380fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f44a0);
    FUN_012d0dc8(PTR_DAT_05775b60);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c380fb = 1;
  }
  puVar1 = PTR_DAT_057606c8;
                    /* try { // try from 03f1fbb8 to 0401fbef has its CatchHandler @ 03f1fca4 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__DisableTexts_3e1fd64(param_1);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 03f1fb64 with catch @ 03f1fbf0
                       try { // try from 03f1fbf0 to 0401fc1b has its CatchHandler @ 03f1f890 */
                    /* catch() { ... } // from try @ 03f1f93c with catch @ 03f1fc00
                       catch() { ... } // from try @ 03f1fafc with catch @ 03f1fc00 */
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05775b60,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
                    /* try { // try from 03f1fc1c to 0401fc33 has its CatchHandler @ 03f1fc94 */
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      lVar4 = *(long *)(param_1 + 0x60);
      if (lVar4 != 0) {
                    /* try { // try from 03f1fc34 to 0401fc83 has its CatchHandler @ 03f1f890 */
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x54),
                           *(undefined4 *)(lVar4 + 0x58),0,uVar5,0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
          lVar4 = *(long *)(param_1 + 0x60);
          if (lVar4 != 0) {
            uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(undefined4 *)(lVar4 + 0x5c),*(undefined4 *)(lVar4 + 0x60),
                               *(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68),uVar5,0);
                    /* try { // try from 03f1fc84 to 0401fc93 has its CatchHandler @ 03f1fc94 */
            if (*(long *)(param_1 + 0x60) != 0) {
                    /* catch() { ... } // from try @ 03f1fc1c with catch @ 03f1fc94
                       catch() { ... } // from try @ 03f1fc84 with catch @ 03f1fc94 */
                    /* try { // try from 03f1fc98 to 0401fc9b has its CatchHandler @ 03f1fca4 */
              uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x70),
                                 *(undefined8 *)PTR_DAT_057874c0);
                    /* try { // try from 03f1fc9c to 0401fca7 has its CatchHandler @ 03f1f890 */
                    /* catch() { ... } // from try @ 03f1fbb8 with catch @ 03f1fca4
                       catch() { ... } // from try @ 03f1fc98 with catch @ 03f1fca4 */
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
              if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x78);
                uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
                lVar4 = *(long *)(param_1 + 0x60);
                if (lVar4 != 0) {
                  uVar5 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                                    (*(undefined4 *)(lVar4 + 0x7c),*(undefined4 *)(lVar4 + 0x80),
                                     *(undefined4 *)(lVar4 + 0x84),*(undefined4 *)(lVar4 + 0x88),
                                     *(undefined4 *)(lVar4 + 0x90),uVar5,
                                     *(undefined4 *)(lVar4 + 0x8c),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar6,uVar3,uVar5,0);
                  if (*(long *)(param_1 + 0x60) != 0) {
                    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x78);
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar4 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar4,param_1,*(undefined8 *)PTR_DAT_057f44a0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar6,uVar3,lVar4,0);
                      return uVar3;
                    }
                  }
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

