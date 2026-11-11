/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$ClearViewModels
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__ClearViewModels (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$ClearViewModels
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__ClearViewModels
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__ClearViewModels_2af2484
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000005c2ebb9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764190);
    FUN_012d0dc8(PTR_DAT_057d8428);
    FUN_012d0dc8(PTR_DAT_05804ff8);
    FUN_012d0dc8(PTR_DAT_057d7a10);
    FUN_012d0dc8(PTR_DAT_05813f30);
    FUN_012d0dc8(PTR_DAT_0575e410);
    bRam0000000005c2ebb9 = 1;
  }
  puVar5 = PTR_DAT_05813f30;
  puVar4 = PTR_DAT_057d8428;
  puVar3 = PTR_DAT_05764190;
  puVar2 = PTR_DAT_0575e410;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_05813f30);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Return_30eaa28
                (*(long *)(param_1 + 0x58),uStack_50,*(undefined8 *)puVar2);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x48) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x48),*(undefined8 *)puVar5);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_50 = uStack_68;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Return_30eaa28
                  (*(long *)(param_1 + 0x58),uStack_50,*(undefined8 *)puVar2);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar3);
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 != 0) {
        iVar1 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        }
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 != 0) {
          iVar1 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

