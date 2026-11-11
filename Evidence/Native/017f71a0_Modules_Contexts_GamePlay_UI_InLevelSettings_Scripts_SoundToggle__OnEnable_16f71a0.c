/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.SoundToggle$$OnEnable
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SoundToggle__OnEnable (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SoundToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.SoundToggle$$OnEnable
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SoundToggle__OnEnable
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SoundToggle_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SoundToggle__OnEnable_16f71a0
               (long param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24b87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_0576b820);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057b46e0);
    bRam0000000005c24b87 = 1;
  }
  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_0576b820);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    FUN_012d0d74();
    lVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    puVar2 = PTR_DAT_05818458;
    if (lVar5 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar5 != 0) &&
         (System_Action_bool____ctor_1645204(lVar5,param_1,*(undefined8 *)PTR_DAT_057b46e0,0),
         lVar6 != 0)) {
        Modules_Infrastructure_UI_Common_Scripts_ToggleNS_SimpleToggle__add_OnToggleChanged_4005388
                  (lVar6,lVar5,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar5 = *(long *)(param_1 + 0x18);
          bVar3 = Modules_Contexts_Application_Sound_Scripts_SoundService__GetSoundEffectPreference_3e2b9ec
                            (*(long *)(param_1 + 0x20),0);
          if (lVar5 != 0) {
            *(byte *)(lVar5 + 0x39) = bVar3 & 1;
            lVar6 = *(long *)(lVar5 + 0x40);
            if (lVar6 != 0) {
              cVar1 = *(char *)(lVar5 + 0x39);
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(lVar6,cVar1 == '\0');
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(0,bVar3 & 1,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

