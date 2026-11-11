/* IL2CPP: Modules.Contexts.Home.TeamArena.TeamArenaConfigModel$$.ctor
void Modules_Contexts_Home_TeamArena_TeamArenaConfigModel___ctor (Modules_Contexts_Home_TeamArena_TeamArenaConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.TeamArenaConfigModel$$.ctor
   void Modules_Contexts_Home_TeamArena_TeamArenaConfigModel___ctor
   (Modules_Contexts_Home_TeamArena_TeamArenaConfigModel_o* __this, const MethodInfo* method); */

undefined1  [16] Modules_Contexts_Home_TeamArena_TeamArenaConfigModel___ctor_2de2ca4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_057bc980;
  if ((bRam0000000005c2fd5f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d750);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_057bc980);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c2fd5f = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_0576d750;
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_0576d750);
    *(long *)(param_1 + 0x30) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x30),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_05781050;
    if (lVar3 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar1);
      *(long *)(param_1 + 0x38) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x38),lVar3);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar1 = PTR_DAT_057994c8;
      if (lVar3 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar3,*(undefined8 *)PTR_DAT_057994c8);
        *(long *)(param_1 + 0x40) = lVar3;
        FUN_012d0d74((long *)(param_1 + 0x40),lVar3);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar1);
          *(long *)(param_1 + 0x48) = lVar3;
          FUN_012d0d74((long *)(param_1 + 0x48),lVar3);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar3 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar1);
            *(long *)(param_1 + 0x50) = lVar3;
            FUN_012d0d74((long *)(param_1 + 0x50),lVar3);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar3 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar1);
              *(long *)(param_1 + 0x58) = lVar3;
              FUN_012d0d74((long *)(param_1 + 0x58),lVar3);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = param_1;
              return auVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

