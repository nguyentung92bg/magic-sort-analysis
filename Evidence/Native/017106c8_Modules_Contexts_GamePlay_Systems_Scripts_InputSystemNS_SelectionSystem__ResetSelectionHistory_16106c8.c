/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$ResetSelectionHistory
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ResetSelectionHistory (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$ResetSelectionHistory
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ResetSelectionHistory
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ResetSelectionHistory_16106c8
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  undefined *puVar7;
  
  if ((bRam0000000005c2448a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791178);
    bRam0000000005c2448a = 1;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (iVar1 < 1) {
      return;
    }
    puVar4 = *(undefined8 **)(lVar8 + 0x10);
    if (puVar4 == (undefined8 *)0x0) {
      thunk_FUN_0136d790(PTR_DAT_057c1ad0,0,iVar1,0);
      uVar5 = thunk_FUN_01320e48();
      FUN_0103b554();
      uVar6 = thunk_FUN_0136d790(PTR_DAT_057b5798);
      System_ArgumentNullException___ctor_211d594(uVar5,uVar6,0);
    }
    else {
      if (iVar1 < 0) {
        thunk_FUN_0136d790(PTR_DAT_0577cad0,0,iVar1,0);
        uVar5 = thunk_FUN_01320e48();
        FUN_0103b554();
        puVar7 = PTR_DAT_057a0520;
      }
      else {
        iVar2 = FUN_0133d04c(puVar4,0);
        if (iVar2 < 1) {
          iVar3 = System_Array__get_Length_269b654(puVar4);
          if (-iVar2 <= iVar3 - iVar1) {
            iVar3 = il2cpp_array_element_size(*puVar4);
            (*(code *)PTR_memset_057579a8)
                      ((long)puVar4 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1));
            return;
          }
          thunk_FUN_0136d790(PTR_DAT_0577cad0);
          uVar5 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar7 = PTR_DAT_057d40f8;
        }
        else {
          thunk_FUN_0136d790(PTR_DAT_0577cad0);
          uVar5 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar7 = PTR_DAT_057f4438;
        }
      }
      uVar6 = thunk_FUN_0136d790(puVar7);
      System_IndexOutOfRangeException___ctor_26c73a0(uVar5,uVar6,0);
    }
    uVar6 = thunk_FUN_0136d790(PTR_DAT_057b9a70);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar5,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

