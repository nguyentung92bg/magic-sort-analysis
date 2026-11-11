/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopUp$$ShowRewards
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__ShowRewards (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp_o* __this, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopUp$$ShowRewards
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__ShowRewards
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp_o* __this,
   System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopUp__ShowRewards_3465724
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c32676 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_0575d710);
    bRam0000000005c32676 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_03565ae8;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x68),0,0);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_03565ae8;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x60),0,0);
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_03565ae8;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),0,0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_03565ae8;
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x58),0,0);
  if (param_2 == 0) {
LAB_03565834:
    if (*(long *)(param_1 + 0x50) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),0,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x58),1,0);
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 5) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_03565ae8;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),1,0);
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_03565ae8;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x60),1,0);
      lVar8 = *(long *)(param_1 + 0x68);
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 1) goto LAB_035658d0;
        goto LAB_03565834;
      }
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_03565ae8;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),1,0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_03565ae8;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x68),1,0);
      lVar8 = *(long *)(param_1 + 0x60);
    }
    if (lVar8 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
LAB_035658d0:
      puVar7 = PTR_DAT_057db748;
      puVar6 = PTR_DAT_057b3a70;
      puVar5 = PTR_DAT_0575d710;
      puVar4 = PTR_DAT_0575bcf8;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (auStack_98,param_2,*(undefined8 *)PTR_DAT_057a6288);
      uStack_78 = uStack_90;
      lStack_70 = lStack_88;
      do {
        uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_80,*(undefined8 *)puVar6);
        lVar8 = lStack_70;
        if ((uVar9 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)PTR_DAT_05811f10);
          return;
        }
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        switch(*(undefined4 *)(lStack_70 + 0x10)) {
        case 1:
          lVar13 = *(long *)(param_1 + 0x30);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (0 < (int)uVar2) {
            uVar12 = 0;
            do {
              if (uVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              plVar11 = *(long **)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
              uVar3 = *(undefined4 *)(lVar8 + 0x14);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar10 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04
                                 (uVar3,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0(uVar10,uVar10);
              }
              (**(code **)(*plVar11 + 0x558))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x560));
              uVar2 = *(uint *)(lVar13 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar2);
          }
          break;
        case 4:
          plVar11 = *(long **)(param_1 + 0x38);
          auStack_98[0] = *(undefined4 *)(lStack_70 + 0x14);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,auStack_98);
          uVar10 = System_String__Format_1ec10a8(*(undefined8 *)puVar5,uVar10,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(uVar10,uVar10);
          }
          (**(code **)(*plVar11 + 0x558))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x560));
          break;
        case 5:
          plVar11 = *(long **)(param_1 + 0x40);
          auStack_98[0] = *(undefined4 *)(lStack_70 + 0x14);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,auStack_98);
          uVar10 = System_String__Format_1ec10a8(*(undefined8 *)puVar5,uVar10,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(uVar10,uVar10);
          }
          (**(code **)(*plVar11 + 0x558))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x560));
          break;
        case 6:
          plVar11 = *(long **)(param_1 + 0x48);
          auStack_98[0] = *(undefined4 *)(lStack_70 + 0x14);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,auStack_98);
          uVar10 = System_String__Format_1ec10a8(*(undefined8 *)puVar5,uVar10,0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(uVar10,uVar10);
          }
          (**(code **)(*plVar11 + 0x558))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x560));
        }
      } while( true );
    }
  }
LAB_03565ae8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

