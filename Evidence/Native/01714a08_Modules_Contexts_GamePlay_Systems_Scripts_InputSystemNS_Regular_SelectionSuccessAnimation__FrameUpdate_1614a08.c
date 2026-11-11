/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$FrameUpdate
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__FrameUpdate (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, float elapsedSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$FrameUpdate
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__FrameUpdate
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, float elapsedSeconds, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__FrameUpdate_1614a08
                (ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = param_1;
  if (*(char *)(param_1 + 0x160) != '\0') {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (0 < *(int *)(lVar6 + 0x10)) {
      iVar2 = *(int *)(lVar6 + 0x14);
      if (iVar2 == 0) {
        uVar3 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayStartingAnimation_1614b14
                          (param_1);
        iVar2 = *(int *)(lVar6 + 0x14);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 1;
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
          *(int *)(lVar6 + 0x14) = iVar2;
        }
      }
      if (iVar2 == 1) {
        uVar3 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottleTowardAnimation_1614ce4
                          (param_1);
        iVar2 = *(int *)(lVar6 + 0x14);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 1;
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
          *(int *)(lVar6 + 0x14) = iVar2;
        }
      }
      if (iVar2 == 2) {
        uVar4 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottlePourAnimation_1614f08
                          (param_1);
        uVar3 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayWaterPourAnimation_16152ec
                          (param_1);
        iVar2 = *(int *)(lVar6 + 0x14);
        if (((uVar4 & 1) == 0) && ((uVar3 & 1) == 0)) {
          iVar2 = iVar2 + 1;
          *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
          *(int *)(lVar6 + 0x14) = iVar2;
        }
      }
      if ((iVar2 == 3) &&
         (uVar3 = Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayEndingAnimation_16156bc
                            (param_1), (uVar3 & 1) == 0)) {
        iVar2 = (int)*(undefined8 *)(lVar6 + 0x10) + (int)_UNK_04339c20;
        *(ulong *)(lVar6 + 0x10) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) +
                      (int)((ulong)_UNK_04339c20 >> 0x20),iVar2);
      }
      else {
        iVar2 = *(int *)(lVar6 + 0x10);
      }
      puVar1 = PTR_DAT_0576aae0;
      if (iVar2 < 1) {
        if ((bRam0000000005c24499 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057f1238);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          bRam0000000005c24499 = 1;
        }
        if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
            (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 == 0)) ||
           (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar6,*(undefined8 *)PTR_DAT_057f1238), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if ((bRam0000000005c373d6 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057f50b8,param_1,0);
          bRam0000000005c373d6 = 1;
        }
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = *(long *)PTR_DAT_057f50b8;
        iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0xa0) + 8))
                          (lVar6,param_1);
        if (-1 < iVar2) {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x158) + 8))
                    (lVar6,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
  return uVar3;
}

