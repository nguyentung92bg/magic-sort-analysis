/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$SetActiveTokenId
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__SetActiveTokenId (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, System_String_o* tokenId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$SetActiveTokenId
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__SetActiveTokenId
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this,
   System_String_o* tokenId, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__SetActiveTokenId_2add334
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  *puVar3 = param_2;
  FUN_012d0d74(puVar3,param_2);
  if ((bRam0000000005c2eb00 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3f60);
    FUN_012d0dc8(PTR_DAT_057f12e8);
    FUN_012d0dc8(PTR_DAT_0577b4d8);
    FUN_012d0dc8(PTR_DAT_057e6540);
    FUN_012d0dc8(PTR_DAT_057c72f0);
    FUN_012d0dc8(PTR_DAT_057e7418);
    bRam0000000005c2eb00 = 1;
  }
  puVar2 = PTR_DAT_057f12e8;
  puVar1 = PTR_DAT_0577b4d8;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    if (lVar4 != 0) {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator_3976ed0
                (&uStack_50,lVar4,*(undefined8 *)PTR_DAT_057a3f60);
      while (uVar5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_3922430
                               (&uStack_50,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x28);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        (**(code **)(*plVar6 + 0x1e8))
                  (plVar6,uStack_38,uStack_40 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x1f0));
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_392254c
                (&uStack_50,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

