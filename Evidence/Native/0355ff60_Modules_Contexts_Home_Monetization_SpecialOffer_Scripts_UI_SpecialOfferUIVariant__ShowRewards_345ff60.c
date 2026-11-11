/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferUIVariant$$ShowRewards
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant_o* __this, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferUIVariant$$ShowRewards
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant_o* __this,
   System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c3263c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_0575d710);
    bRam0000000005c3263c = 1;
  }
  puVar6 = PTR_DAT_05811f10;
  puVar5 = PTR_DAT_057db748;
  puVar4 = PTR_DAT_057b3a70;
  puVar3 = PTR_DAT_0575d710;
  puVar2 = PTR_DAT_0575bcf8;
  uStack_68 = 0;
  lStack_60 = 0;
                    /* try { // try from 0355ffec to 03660033 has its CatchHandler @ 03560098 */
  uStack_70 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (auStack_88,param_2,*(undefined8 *)PTR_DAT_057a6288);
  uStack_68 = uStack_80;
  lStack_60 = lStack_78;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar6);
      return;
    }
                    /* try { // try from 03560060 to 03660063 has its CatchHandler @ 03560090 */
    if (lStack_60 == 0) break;
                    /* try { // try from 03560064 to 03660077 has its CatchHandler @ 03560094 */
                    /* try { // try from 03560078 to 03660087 has its CatchHandler @ 0355fe2c */
    switch(*(undefined4 *)(lStack_60 + 0x10)) {
    case 1:
      plVar9 = *(long **)(param_1 + 0x18);
      uVar1 = *(undefined4 *)(lStack_60 + 0x14);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04(uVar1,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(uVar8,uVar8);
      }
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
      break;
    case 2:
      plVar9 = *(long **)(param_1 + 0x20);
      uVar8 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                        (*(undefined8 *)(lStack_60 + 0x18),0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(uVar8,uVar8);
      }
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
      break;
    case 4:
      plVar9 = *(long **)(param_1 + 0x28);
      auStack_88[0] = *(undefined4 *)(lStack_60 + 0x14);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,auStack_88);
      uVar8 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar8,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(uVar8,uVar8);
      }
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
      break;
    case 5:
      plVar9 = *(long **)(param_1 + 0x30);
      auStack_88[0] = *(undefined4 *)(lStack_60 + 0x14);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,auStack_88);
      uVar8 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar8,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(uVar8,uVar8);
      }
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
      break;
    case 6:
      plVar9 = *(long **)(param_1 + 0x38);
      auStack_88[0] = *(undefined4 *)(lStack_60 + 0x14);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,auStack_88);
      uVar8 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar8,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(uVar8,uVar8);
      }
      (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

