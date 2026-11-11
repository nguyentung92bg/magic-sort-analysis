/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$AddRewardModels
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__AddRewardModels (System_Collections_Generic_List_RewardModel__o* target, System_Collections_Generic_IEnumerable_ClientCommonRewardModelWithCollection__o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0368b57c) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$AddRewardModels
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__AddRewardModels
   (System_Collections_Generic_List_RewardModel__o* target,
   System_Collections_Generic_IEnumerable_ClientCommonRewardModelWithCollection__o* source, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__AddRewardModels_358b2e4
               (long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  
  if ((bRam0000000005c32df1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057897b8);
    FUN_012d0dc8(PTR_DAT_057e4438);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    FUN_012d0dc8(PTR_DAT_05766c50);
    bRam0000000005c32df1 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057897b8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0368b3a4;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_057897b8,0);
LAB_0368b3a4:
  puVar5 = PTR_DAT_058165e8;
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar4 = PTR_DAT_057e4438;
  puVar3 = PTR_DAT_057a12b8;
  puVar2 = PTR_DAT_05766c50;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0368b424;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar3,0);
LAB_0368b424:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 == 0) goto LAB_0368b530;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0368b480;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar4,0);
LAB_0368b480:
    lVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (lVar9 != 0) {
      uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModel_358b244
                        ();
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
        FUN_012d0d74();
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(param_1);
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0368b54c;
    }
  }
LAB_0368b530:
  puVar6 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar5,0);
LAB_0368b54c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}

