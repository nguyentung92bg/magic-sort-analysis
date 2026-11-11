/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$LoadDefaultRegularConfigs
Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o* Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadDefaultRegularConfigs (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$LoadDefaultRegularConfigs
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadDefaultRegularConfigs
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadDefaultRegularConfigs_1cb4d60
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_057adcb0;
  if ((bRam0000000005c27736 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781b10);
                    /* try { // try from 01db4d9c to 01eb4dbf has its CatchHandler @ 01db50f4 */
    FUN_012d0dc8(PTR_DAT_057f1b90);
    FUN_012d0dc8(PTR_DAT_057c9688);
    FUN_012d0dc8(PTR_DAT_057adcb0);
    FUN_012d0dc8(PTR_DAT_057977d0);
                    /* try { // try from 01db4dcc to 01eb4de3 has its CatchHandler @ 01db50b4 */
    FUN_012d0dc8(PTR_DAT_05784808);
    FUN_012d0dc8(PTR_DAT_05796380);
    FUN_012d0dc8(PTR_DAT_057f1e88);
    bRam0000000005c27736 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057977d0;
  if (lVar4 != 0) {
                    /* try { // try from 01db4dfc to 01eb4e3b has its CatchHandler @ 01db50bc */
    System_Object___ctor_23dfe5c(lVar4,0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_057f1e88;
    puVar3 = PTR_DAT_057c9688;
    if (lVar5 != 0) {
      Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelsConfig___ctor_1e8d1b8
                (lVar5,0);
      uVar6 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object__23910f8
                        (param_1,*(undefined8 *)puVar2,lVar5,*(undefined8 *)puVar3);
                    /* try { // try from 01db4e4c to 01eb4ebf has its CatchHandler @ 01db50d0 */
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
      FUN_012d0d74();
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05796380;
      puVar1 = PTR_DAT_05781b10;
      if (lVar5 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelsConfig___ctor_1e8d1b8
                  (lVar5,0);
        uVar6 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object__23910f8
                          (param_1,*(undefined8 *)puVar2,lVar5,*(undefined8 *)puVar3);
        *(undefined8 *)(lVar4 + 0x18) = uVar6;
        FUN_012d0d74();
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar3 = PTR_DAT_057f1b90;
        puVar1 = PTR_DAT_05784808;
        if (lVar5 != 0) {
                    /* try { // try from 01db4ecc to 01eb4eef has its CatchHandler @ 01db50f4 */
          Modules_Contexts_GamePlay_UI_NewBlockerIntro_Scripts_BlockerIntroConfigModel___ctor_16ec100
                    (lVar5,0);
          uVar6 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object__23910f8
                            (param_1,*(undefined8 *)puVar1,lVar5,*(undefined8 *)puVar3);
          *(undefined8 *)(lVar4 + 0x20) = uVar6;
          FUN_012d0d74();
                    /* try { // try from 01db4efc to 01eb4f13 has its CatchHandler @ 01db50c4 */
          return lVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

