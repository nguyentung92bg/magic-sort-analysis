/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameOfferResponseModel$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferResponseModel___ctor (Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferResponseModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameOfferResponseModel$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferResponseModel___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferResponseModel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_MiniGame_Scripts_MiniGameOfferResponseModel___ctor_20b4868(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_05781050;
  if ((bRam0000000005c29551 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c29551 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057994c8;
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057994c8);
    *(long *)(param_1 + 0x18) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x18),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x20) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x20),lVar3);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      return auVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

