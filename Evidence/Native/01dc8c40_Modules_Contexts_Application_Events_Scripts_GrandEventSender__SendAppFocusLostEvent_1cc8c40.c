/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendAppFocusLostEvent
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendAppFocusLostEvent (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendAppFocusLostEvent
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendAppFocusLostEvent
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendAppFocusLostEvent_1cc8c40
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_057ce4c8;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c277c7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0577e770);
    FUN_012d0dc8(PTR_DAT_05788fa8);
    FUN_012d0dc8(PTR_DAT_057ce4c8);
    bRam0000000005c277c7 = 1;
  }
  uVar9 = *(undefined8 *)puVar2;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057db748;
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01dc8ebc;
    uStack_34 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2c);
    uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_34);
    puVar2 = PTR_DAT_05788fa8;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01dc8ebc;
    uStack_38 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28);
    uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_38);
    uVar10 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar10,uVar4,0);
    uVar9 = System_String__Concat_1ec3580(uVar9,uVar10,0);
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c(lVar5,uVar9);
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten_1f19f20
                        (*(long *)(param_1 + 0x48),0);
      fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_40862bc(0);
      puVar2 = PTR_DAT_0577e770;
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_01dc8ebc;
      fVar11 = fVar11 - *(float *)(*(long *)(param_1 + 0x48) + 0x108);
      iStack_3c = -0x80000000;
      if (fVar11 != INFINITY) {
        iStack_3c = (int)fVar11;
      }
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_3c);
      uVar9 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar9,uVar10,0);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar10 = Modules_Infrastructure_Input_InputService__GetInputHistory_3d2d5ac
                         (*(long *)(param_1 + 0x50),0);
      uVar3 = System_String__IsNullOrEmpty_1ed04ac(uVar10,0);
      if ((uVar3 & 1) == 0) {
        System_String__Concat_1ec3580(uVar9,uVar10,0);
      }
    }
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_01dc8e9c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01dc8e9c:
      (*(code *)*puVar6)(plVar8,puVar6[1]);
      return;
    }
  }
LAB_01dc8ebc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

