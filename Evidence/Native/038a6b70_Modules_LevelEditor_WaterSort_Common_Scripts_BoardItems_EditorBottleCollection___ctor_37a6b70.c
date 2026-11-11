/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$.ctor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$.ctor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33e48 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_0576b880);
    FUN_012d0dc8(PTR_DAT_057682f8);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bb430);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_057fa9b0);
    FUN_012d0dc8(PTR_DAT_0575c5a0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_057b4330);
    FUN_012d0dc8(PTR_DAT_05773488);
    bRam0000000005c33e48 = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) {
    uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_0576b880);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    FUN_012d0d74();
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) {
      uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057d5610);
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      FUN_012d0d74();
      puVar1 = PTR_DAT_05805bc0;
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) {
        uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_0575c3c8);
        *(undefined8 *)(param_1 + 0x40) = uVar4;
        FUN_012d0d74();
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057b4330;
        if (lVar3 != 0) {
          System_Collections_Generic_List_Int32Enum____ctor_20512f0
                    (lVar3,*(undefined8 *)PTR_DAT_057b99d0);
          *(long *)(param_1 + 0x50) = lVar3;
          FUN_012d0d74((long *)(param_1 + 0x50),lVar3);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0575c5a0;
          if (lVar3 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar3,*(undefined8 *)PTR_DAT_057fa9b0);
            *(long *)(param_1 + 0x18) = lVar3;
            FUN_012d0d74((long *)(param_1 + 0x18),lVar3);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar3,*(undefined8 *)PTR_DAT_057bb430);
              *(long *)(param_1 + 0x20) = lVar3;
              FUN_012d0d74((long *)(param_1 + 0x20),lVar3);
              if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                  (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
                 (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar3,*(undefined8 *)PTR_DAT_057682f8), lVar3 != 0)) {
                lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject_2304f00
                                  (lVar3,0,0);
                plVar5 = (long *)(param_1 + 0x10);
                *plVar5 = lVar3;
                FUN_012d0d74(plVar5,lVar3);
                puVar2 = PTR_DAT_0576c200;
                lVar3 = *plVar5;
                if (lVar3 != 0) {
                  uVar4 = *(undefined8 *)PTR_DAT_05773488;
                  if ((bRam0000000005c3a496 & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_0576c200,uVar4,0);
                    bRam0000000005c3a496 = 1;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  if (pcRam0000000005c3a518 == (code *)0x0) {
                    pcRam0000000005c3a518 = (code *)FUN_012d0d84(&UNK_043ee8c4);
                  }
                    /* WARNING: Could not recover jumptable at 0x0419156c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000005c3a518)(lVar3,uVar4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

