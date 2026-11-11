/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$Dispose
void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Dispose (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$Dispose
   void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Dispose
   (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__Dispose_2469e90
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((bRam0000000005c2b0c6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05797920);
    FUN_012d0dc8(PTR_DAT_05768768);
    FUN_012d0dc8(PTR_DAT_0576fb48);
    FUN_012d0dc8(PTR_DAT_05774410);
    FUN_012d0dc8(PTR_DAT_057a1308);
    FUN_012d0dc8(PTR_DAT_057dc748);
    bRam0000000005c2b0c6 = 1;
  }
  puVar3 = PTR_DAT_05797920;
  puVar2 = PTR_DAT_05768768;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057dc748);
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      (**(code **)(*plStack_28 + 0x1b8))(plStack_28,*(undefined8 *)(*plStack_28 + 0x1c0));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar3);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
  }
  return;
}

