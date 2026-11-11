/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBlockerVariant
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerVariant (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBlockerVariant
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerVariant
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined1
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerVariant_2f66128
          (long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((bRam0000000005c3092b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3092b = 1;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if ((((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar2 == 0)) ||
        (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 == 0)) ||
       ((*(long *)(lVar2 + 0x18) == 0 ||
        (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = *(undefined1 *)(lVar2 + 0x38);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

