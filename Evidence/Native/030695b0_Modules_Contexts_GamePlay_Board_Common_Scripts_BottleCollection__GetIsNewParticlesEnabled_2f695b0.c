/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetIsNewParticlesEnabled
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIsNewParticlesEnabled (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetIsNewParticlesEnabled
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIsNewParticlesEnabled
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined1
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIsNewParticlesEnabled_2f695b0
          (void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3092a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3092a = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
      (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0x18) != 0 &&
      (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar2 != 0)))) {
    return *(undefined1 *)(lVar2 + 0x3b);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

