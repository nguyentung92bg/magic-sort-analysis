/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$ReturnToDefaultSequence
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ReturnToDefaultSequence (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, float targetAngleForHandle, float targetAngleForCount, float countTextChangeTime, float totalDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$ReturnToDefaultSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ReturnToDefaultSequence
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, float
   targetAngleForHandle, float targetAngleForCount, float countTextChangeTime, float totalDuration,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ReturnToDefaultSequence_261617c
          (float param_1,float param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_057815e0;
                    /* try { // try from 02716198 to 028162cf has its CatchHandler @ 02716198
                       catch() { ... } // from try @ 02716198 with catch @ 02716198
                       catch() { ... } // from try @ 02716374 with catch @ 02716198
                       catch() { ... } // from try @ 027163b8 with catch @ 02716198
                       catch() { ... } // from try @ 0271649c with catch @ 02716198
                       catch() { ... } // from try @ 027164a4 with catch @ 02716198
                       catch() { ... } // from try @ 02716540 with catch @ 02716198 */
  if ((bRam0000000005c2ba2c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057a5958);
    FUN_012d0dc8(PTR_DAT_057f0328);
    FUN_012d0dc8(PTR_DAT_057f6610);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    bRam0000000005c2ba2c = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_5,*(undefined8 *)PTR_DAT_057a5958,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar5,0);
    uVar6 = *(undefined8 *)(param_5 + 0x60);
    if (cRam0000000005c24e32 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c24e32 = '\x01';
    }
    puVar3 = PTR_DAT_05805c10;
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar6 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                      (*(float *)(lVar5 + 0x48) * param_1,*(float *)(lVar5 + 0x4c) * param_1,
                       *(float *)(lVar5 + 0x50) * param_1,param_4,uVar6,1,0);
    puVar2 = PTR_DAT_057bcc80;
                    /* try { // try from 027162d0 to 028162f7 has its CatchHandler @ 027164bc */
    if (*(long *)(param_5 + 0x20) != 0) {
      uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar6,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x28),
                         *(undefined8 *)PTR_DAT_057bcc80);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar6,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
                    /* try { // try from 02716310 to 02816373 has its CatchHandler @ 027164c0 */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_5,*(undefined8 *)PTR_DAT_057f6610,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_3,uVar4,lVar5,0);
        uVar6 = *(undefined8 *)(param_5 + 0x78);
        if (cRam0000000005c24e32 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c24e32 = '\x01';
        }
        lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                    /* try { // try from 02716374 to 028163af has its CatchHandler @ 02716198 */
        uVar6 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                          (*(float *)(lVar5 + 0x48) * param_2,*(float *)(lVar5 + 0x4c) * param_2,
                           *(float *)(lVar5 + 0x50) * param_2,param_4,uVar6,1,0);
        if (*(long *)(param_5 + 0x20) != 0) {
          uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar6,*(undefined8 *)(*(long *)(param_5 + 0x20) + 0xd8),
                             *(undefined8 *)puVar2);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar6,0);
                    /* try { // try from 027163b0 to 028163b7 has its CatchHandler @ 027164b8 */
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 027163b8 to 0281648f has its CatchHandler @ 02716198 */
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar5,param_5,*(undefined8 *)PTR_DAT_057f0328,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_4,uVar4,lVar5,0);
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

