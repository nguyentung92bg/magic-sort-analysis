/* IL2CPP: DailyRewardPopUpHatView$$DarkenHatViews
void DailyRewardPopUpHatView__DarkenHatViews (DailyRewardPopUpHatView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DailyRewardPopUpHatView$$DarkenHatViews
   void DailyRewardPopUpHatView__DarkenHatViews (DailyRewardPopUpHatView_o* __this, const
   MethodInfo* method); */

void DailyRewardPopUpHatView__DarkenHatViews_19ed7a8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c260af & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057e1e70);
    bRam0000000005c260af = 1;
  }
  puVar5 = PTR_DAT_057fbae0;
  puVar4 = PTR_DAT_057e1e70;
  puVar3 = PTR_DAT_057936b8;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_0579f3e8);
    uVar2 = _DAT_04321768;
    uVar1 = _UNK_04321764;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_68,*(undefined8 *)puVar5), (uVar6 & 1) != 0) {
      uVar7 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                        (uVar1,uVar1,uVar1,0x3f800000,uVar2,uStack_58,0);
      uVar8 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                (uVar7,uVar8,*(undefined8 *)puVar4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_68,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

