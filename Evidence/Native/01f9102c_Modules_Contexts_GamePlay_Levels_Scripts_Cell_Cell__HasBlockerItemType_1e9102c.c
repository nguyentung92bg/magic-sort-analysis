/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$HasBlockerItemType
bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$HasBlockerItemType
   bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, int32_t type, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasBlockerItemType_1e9102c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c28132 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    bRam0000000005c28132 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(param_1);
  puVar2 = PTR_DAT_057f9000;
  puVar1 = PTR_DAT_05763bd8;
  if ((uVar4 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057db9e8);
    do {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar4 & 1) == 0) {
        bVar3 = 0;
        iVar5 = 6;
        goto LAB_01f91104;
      }
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while (*(int *)(lStack_28 + 0x18) != param_2);
    bVar3 = 1;
    iVar5 = 5;
LAB_01f91104:
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar2);
    bVar3 = iVar5 == 5 & bVar3;
  }
  return bVar3;
}

