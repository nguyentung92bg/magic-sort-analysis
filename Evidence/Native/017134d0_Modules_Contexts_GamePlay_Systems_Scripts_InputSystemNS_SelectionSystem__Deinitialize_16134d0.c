/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$Deinitialize
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__Deinitialize (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$Deinitialize
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__Deinitialize
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__Deinitialize_16134d0
               (long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c2448f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791178);
    bRam0000000005c2448f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 0) {
        if ((bRam0000000005c373d6 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057f50b8,param_1,0);
          bRam0000000005c373d6 = 1;
        }
        lVar3 = *(long *)(lVar3 + 0x18);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar2 = *(long *)PTR_DAT_057f50b8;
        iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0xa0) + 8))
                          (lVar3,param_1);
        if (-1 < iVar1) {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x158) + 8))
                    (lVar3,iVar1);
        }
        return -1 < iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

