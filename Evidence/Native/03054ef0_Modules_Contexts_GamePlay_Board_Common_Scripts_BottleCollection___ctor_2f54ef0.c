/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$.ctor
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection___ctor (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, bool isFirstLevels, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$.ctor
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection___ctor
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, bool isFirstLevels,
   bool isDaily, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection___ctor_2f54ef0
               (long param_1,byte param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c308ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5610);
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_057dffc8);
    FUN_012d0dc8(PTR_DAT_057e2b58);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_05761608);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_057f1040);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580d580);
    FUN_012d0dc8(PTR_DAT_057658e0);
    FUN_012d0dc8(PTR_DAT_05818988);
    FUN_012d0dc8(PTR_DAT_057ddcb0);
    FUN_012d0dc8(PTR_DAT_0575f1c8);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_0581a278);
    FUN_012d0dc8(PTR_DAT_0580b7f0);
    FUN_012d0dc8(PTR_DAT_057ff300);
    FUN_012d0dc8(PTR_DAT_05805c38);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_05775368);
    FUN_012d0dc8(PTR_DAT_057c02d0);
    bRam0000000005c308ff = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_057dffc8);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    FUN_012d0d74();
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
      uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_057e2b58);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      FUN_012d0d74();
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
        uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar2,*(undefined8 *)PTR_DAT_057d5610);
        *(undefined8 *)(param_1 + 0x38) = uVar3;
        FUN_012d0d74();
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
          uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar2,*(undefined8 *)PTR_DAT_05805608);
          *(undefined8 *)(param_1 + 0x40) = uVar3;
          FUN_012d0d74();
          if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
               (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
              (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 != 0)) &&
             (*(long *)(lVar2 + 0x18) != 0)) {
            *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x10);
            FUN_012d0d74();
            if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
               (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
              uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar2,*(undefined8 *)PTR_DAT_0575c3c8);
              *(undefined8 *)(param_1 + 0x50) = uVar3;
              FUN_012d0d74();
              if ((param_3 & 1) == 0) {
                if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
                   (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0))
                goto LAB_030553b0;
                uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar2,*(undefined8 *)PTR_DAT_05761608);
                *(undefined8 *)(param_1 + 0x88) = uVar3;
                FUN_012d0d74();
                if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
                   (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0))
                goto LAB_030553b0;
                uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar2,*(undefined8 *)PTR_DAT_057f1040);
                *(undefined8 *)(param_1 + 0x90) = uVar3;
                FUN_012d0d74();
              }
              lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
              puVar1 = PTR_DAT_057658e0;
              if (lVar2 != 0) {
                System_Collections_Generic_List_Int32Enum____ctor_20512f0
                          (lVar2,*(undefined8 *)PTR_DAT_057b99d0);
                *(long *)(param_1 + 0x70) = lVar2;
                FUN_012d0d74((long *)(param_1 + 0x70),lVar2);
                lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_05775368;
                if (lVar2 != 0) {
                  System_Collections_Generic_Dictionary_Int32Enum__int____ctor_36cd93c
                            (lVar2,*(undefined8 *)PTR_DAT_0580d580);
                  *(long *)(param_1 + 0x78) = lVar2;
                  FUN_012d0d74((long *)(param_1 + 0x78),lVar2);
                  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  puVar1 = PTR_DAT_05805c38;
                  if (lVar2 != 0) {
                    System_Collections_Generic_List_object____ctor_21fc1fc
                              (lVar2,*(undefined8 *)PTR_DAT_0575f1c8);
                    *(long *)(param_1 + 0x18) = lVar2;
                    FUN_012d0d74((long *)(param_1 + 0x18),lVar2);
                    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    puVar1 = PTR_DAT_0580b7f0;
                    if (lVar2 != 0) {
                      System_Collections_Generic_List_object____ctor_21fc1fc
                                (lVar2,*(undefined8 *)PTR_DAT_057ddcb0);
                      *(long *)(param_1 + 0x20) = lVar2;
                      FUN_012d0d74((long *)(param_1 + 0x20),lVar2);
                      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      puVar1 = PTR_DAT_057ff300;
                      if (lVar2 != 0) {
                        System_Collections_Generic_List_object____ctor_21fc1fc
                                  (lVar2,*(undefined8 *)PTR_DAT_05818988);
                        *(long *)(param_1 + 0x80) = lVar2;
                        FUN_012d0d74((long *)(param_1 + 0x80),lVar2);
                        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        if (lVar2 != 0) {
                          System_Collections_Generic_List_object____ctor_21fc1fc
                                    (lVar2,*(undefined8 *)PTR_DAT_0581a278);
                          *(long *)(param_1 + 0x98) = lVar2;
                          FUN_012d0d74((long *)(param_1 + 0x98),lVar2);
                          *(byte *)(param_1 + 0x58) = param_3 & 1;
                          *(byte *)(param_1 + 0x59) = param_2 & 1;
                          puVar1 = PTR_DAT_057c02d0;
                          if (((*(long *)(param_1 + 0x40) != 0) &&
                              (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar2 != 0)) &&
                             (lVar2 = *(long *)(lVar2 + 0x70), lVar2 != 0)) {
                            *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(lVar2 + 0x18);
                            **(undefined1 **)(*(long *)puVar1 + 0xb8) = 0;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_030553b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

