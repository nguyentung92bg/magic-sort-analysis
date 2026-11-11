/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteSequence
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteSequence (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteSequence
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteSequence_2616410
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c2ba2d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057a86f0);
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* try { // try from 02716490 to 02816493 has its CatchHandler @ 027164b0 */
                    /* try { // try from 02716494 to 0281649b has its CatchHandler @ 027164b4 */
    bRam0000000005c2ba2d = 1;
  }
                    /* try { // try from 0271649c to 0281649f has its CatchHandler @ 02716198 */
  uStack_60 = 0;
  uStack_58 = 0;
                    /* try { // try from 027164a0 to 028164a3 has its CatchHandler @ 027164ac */
  uStack_68 = 0;
                    /* try { // try from 027164a4 to 028164d7 has its CatchHandler @ 02716198 */
  Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetCompleteRotationAnimationSpeed_2616830
            (param_1);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027164a0 with catch @ 027164ac
                        */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02716490 with catch @ 027164b0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02716494 with catch @ 027164b4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027163b0 with catch @ 027164b8
                        */
    fVar9 = *(float *)(*(long *)(param_1 + 0x20) + 0xc0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027162d0 with catch @ 027164bc
                        */
    fVar10 = *(float *)(param_1 + 0xb8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02716310 with catch @ 027164c0
                        */
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar4 = PTR_DAT_057fbae0;
    puVar3 = PTR_DAT_057a86f0;
    puVar2 = PTR_DAT_057936b8;
    puVar1 = PTR_DAT_057606c8;
                    /* try { // try from 027164d8 to 028164db has its CatchHandler @ 02716554 */
    if (*(long *)(param_1 + 0xb0) != 0) {
                    /* try { // try from 02716518 to 0281653f has its CatchHandler @ 02716560 */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_68,*(long *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_68,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 02716540 to 0281654b has its CatchHandler @ 02716198 */
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x54),uStack_58,0);
                    /* try { // try from 0271654c to 02816553 has its CatchHandler @ 02716560 */
                    /* catch() { ... } // from try @ 027164d8 with catch @ 02716554 */
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02716518 with catch @ 02716560
                       catch(type#2 @ 00000000) { ... } // from try @ 0271654c with catch @ 02716560
                        */
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_68,*(undefined8 *)puVar2);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar8 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_1,*(undefined8 *)puVar3,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar8,0);
        uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlaySafeDestroyAnimation_2616854
                          (param_1,param_2);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar9 / fVar10,uVar5,uVar7,0);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

