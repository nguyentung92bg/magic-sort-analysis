/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$.ctor
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem___ctor (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* levelWinOrStuckSystem, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$.ctor
   void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem___ctor
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o*
   levelWinOrStuckSystem, bool isDaily, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem___ctor_16130c8
               (long param_1,undefined8 param_2,byte param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_057ca4f0;
  if ((bRam0000000005c24487 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1238);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057daee8);
    FUN_012d0dc8(PTR_DAT_057ca4f0);
    bRam0000000005c24487 = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_2);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_057daee8;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057daee8);
    *(long *)(param_1 + 0x20) = lVar7;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar7);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    puVar5 = PTR_DAT_0576aae0;
    if (lVar7 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)puVar6);
      *(long *)(param_1 + 0x28) = lVar7;
      FUN_012d0d74((long *)(param_1 + 0x28),lVar7);
      *(byte *)(param_1 + 0x38) = param_3 & 1;
      if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
         (lVar7 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar7 != 0)) {
        lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057f1238);
        plVar10 = (long *)(param_1 + 0x40);
        *plVar10 = lVar7;
        FUN_012d0d74(plVar10,lVar7);
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          if ((bRam0000000005c373d4 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057b7f50,param_1,0);
            bRam0000000005c373d4 = 1;
          }
          lVar7 = *(long *)(lVar7 + 0x18);
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar9 = *(long *)PTR_DAT_057b7f50;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar7 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                *plVar10 = param_1;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x03e2db1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar7,param_1);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

