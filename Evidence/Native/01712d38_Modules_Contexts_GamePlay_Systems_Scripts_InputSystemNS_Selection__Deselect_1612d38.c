/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$Deselect
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Selection$$Deselect
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection__Deselect_1612d38
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000005c24482 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808e00);
    FUN_012d0dc8(PTR_DAT_058018b8);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c24482 = 1;
  }
  puVar1 = PTR_DAT_057b8520;
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_05808e00) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_01712e00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_05808e00,2);
LAB_01712e00:
    puVar2 = PTR_DAT_058018b8;
    (*(code *)*puVar3)(plVar7,param_1,puVar3[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057ec790;
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057871c8 + 0x20) + 0xc0) +
                                0x20) + 8))(*(long *)(lVar4 + 0x10),0x19);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

