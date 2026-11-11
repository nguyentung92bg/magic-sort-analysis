/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemGenerator$$Generate
Modules_Infrastructure_Common_Scripts_Component_AItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator__Generate (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemGenerator$$Generate
   Modules_Infrastructure_Common_Scripts_Component_AItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator__Generate
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator__Generate_2304508
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2a637 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789b10);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a637 = 1;
  }
  puVar2 = PTR_DAT_05789b10;
  lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__GenerateItem_2304620
                    (*(undefined4 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__Instantiate_object__2aac7c0(uVar5,*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetView_40e9d20(lVar3,uVar5,0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetType_40e9d28
              (lVar3,*(undefined4 *)(param_1 + 0x10),0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
              (lVar3,*(undefined8 *)(param_1 + 0x20),0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition_40e9e74
              (*puVar4,puVar4[1],puVar4[2],lVar3,0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__Initialize_40e9d30(lVar3,0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

