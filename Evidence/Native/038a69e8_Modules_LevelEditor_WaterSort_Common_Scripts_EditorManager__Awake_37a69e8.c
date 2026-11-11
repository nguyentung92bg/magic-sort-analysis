/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$Awake
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__Awake (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$Awake
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__Awake
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__Awake_37a69e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33e10 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e37e0);
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_05772770);
    FUN_012d0dc8(PTR_DAT_0576b880);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d0c00);
    bRam0000000005c33e10 = 1;
  }
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar6 != 0)) {
    uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_0576b880);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    FUN_012d0d74();
    puVar5 = PTR_DAT_057e37e0;
    if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar6 != 0)) {
      uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057d5610);
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      FUN_012d0d74();
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      puVar5 = PTR_DAT_057d0c00;
      if (lVar6 != 0) {
        Modules_Infrastructure_Common_Scripts_CommandNS_CommandHistoryManager___ctor_40eb854
                  (lVar6,0);
        *(long *)(param_1 + 0x28) = lVar6;
        FUN_012d0d74((long *)(param_1 + 0x28),lVar6);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
        if (lVar6 != 0) {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
                    ();
          *(long *)(param_1 + 0x48) = lVar6;
          FUN_012d0d74((long *)(param_1 + 0x48),lVar6);
          if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
             (lVar6 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar6 != 0)) {
            uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar6,*(undefined8 *)PTR_DAT_05772770);
            puVar8 = (undefined8 *)(param_1 + 0x18);
            *puVar8 = uVar7;
            if (iRam0000000005c3d478 != 0) {
              puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

