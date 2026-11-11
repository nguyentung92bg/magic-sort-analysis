/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$Initialize
void Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__Initialize (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$Initialize
   void Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__Initialize
   (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__Initialize_160c358
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2443d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2443d = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
      (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 != 0)) &&
     ((*(long *)(lVar2 + 0x18) != 0 &&
      (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar2 != 0)))) {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(lVar2 + 0x39);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

