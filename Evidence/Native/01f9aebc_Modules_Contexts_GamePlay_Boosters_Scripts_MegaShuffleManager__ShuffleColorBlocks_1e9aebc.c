/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleColorBlocks
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleColorBlocks (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* list, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleColorBlocks
   void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleColorBlocks
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* list, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleColorBlocks_1e9aebc
               (undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((bRam0000000005c28170 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05810398);
    FUN_012d0dc8(PTR_DAT_057a2bc8);
    FUN_012d0dc8(PTR_DAT_057cdf28);
    FUN_012d0dc8(PTR_DAT_05791040);
    bRam0000000005c28170 = 1;
  }
  puVar6 = PTR_DAT_057cdf28;
  puVar5 = PTR_DAT_057a2bc8;
  puVar4 = PTR_DAT_05791040;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18) + -1;
    iVar3 = *(int *)(param_2 + 0x18);
    while (0 < iVar1) {
      iVar2 = iVar3 + -1;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = Modules_Infrastructure_Common_Scripts_RandomUtil__GetRandomFromTo_40e4ab0(0,iVar3,0);
      uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,uVar7,*(undefined8 *)puVar5);
      uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,iVar2,*(undefined8 *)puVar5);
      System_Collections_Generic_List_object___set_Item_21fc7c0
                (param_2,iVar2,uVar8,*(undefined8 *)puVar6);
      System_Collections_Generic_List_object___set_Item_21fc7c0
                (param_2,uVar7,uVar9,*(undefined8 *)puVar6);
      iVar1 = iVar3 + -2;
      iVar3 = iVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

