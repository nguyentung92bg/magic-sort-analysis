/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowMagicBottlePopUpCommand$$Initialize
void Modules_Contexts_GamePlay_Loop_Scripts_TryShowMagicBottlePopUpCommand__Initialize (Modules_Contexts_GamePlay_Loop_Scripts_TryShowMagicBottlePopUpCommand_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowMagicBottlePopUpCommand$$Initialize
   void Modules_Contexts_GamePlay_Loop_Scripts_TryShowMagicBottlePopUpCommand__Initialize
   (Modules_Contexts_GamePlay_Loop_Scripts_TryShowMagicBottlePopUpCommand_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_TryShowMagicBottlePopUpCommand__Initialize_1f06410
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c285ac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057acad0);
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c285ac = 1;
  }
  lVar6 = **(long **)(*(long *)puVar4 + 0xb8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    uVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057fe590);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    FUN_012d0d74();
    lVar6 = **(long **)(*(long *)puVar4 + 0xb8);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
      uVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057acad0);
      puVar7 = (undefined8 *)(param_1 + 0x20);
      *puVar7 = uVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

