/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$SetVariant
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__SetVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, int32_t variantId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$SetVariant
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__SetVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, int32_t variantId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__SetVariant_248e0a8
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2b28d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05786c20);
    FUN_012d0dc8(PTR_DAT_057b7ac0);
    FUN_012d0dc8(PTR_DAT_05813580);
    FUN_012d0dc8(PTR_DAT_057f6260);
    bRam0000000005c2b28d = 1;
  }
  puVar2 = PTR_DAT_057b7ac0;
  puVar1 = PTR_DAT_05786c20;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057f6260);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x10) == param_2) {
        *(long *)(param_1 + 0x40) = lStack_38;
        FUN_012d0d74((long *)(param_1 + 0x40),lStack_38);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

