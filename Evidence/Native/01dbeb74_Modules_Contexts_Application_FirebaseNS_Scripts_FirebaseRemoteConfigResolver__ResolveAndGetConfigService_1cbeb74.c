/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$ResolveAndGetConfigService
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ResolveAndGetConfigService (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$ResolveAndGetConfigService
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o*
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ResolveAndGetConfigService
   (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ResolveAndGetConfigService_1cbeb74
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  
  puVar3 = PTR_DAT_05815c20;
  if ((bRam0000000005c2778b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815c20);
    bRam0000000005c2778b = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar5,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x18) != '\0') {
    Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__AddRootLevelConfigService_1cbed80
              (lVar5);
    uVar6 = UnityEngine_Application__get_version_383aa68(0);
    *(undefined8 *)(lVar5 + 0xe0) = uVar6;
    FUN_012d0d74();
    lVar5 = Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ValidateAndFallbackConfigs_1cc0fc0
                      (param_1,lVar5);
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__CacheConfigs_1cc124c
                (*(long *)(param_1 + 0x18),lVar5);
      return lVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_EventSender__SendFirebaseConfigNotFetchedEvent_1449048
            (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__GetRemoteConfigs_1cc12a4
                    ();
  puVar2 = PTR_DAT_058128c8;
  puVar3 = PTR_DAT_0578a3a8;
  if ((bRam0000000005c2778c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058128c8);
    FUN_012d0dc8(PTR_DAT_05818978);
    FUN_012d0dc8(PTR_DAT_05789778);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2778c = 1;
  }
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = System_Type__GetTypeFromHandle_2690398(uVar6,0);
  if ((lVar7 == 0) ||
     (lVar7 = System_Type__GetProperties_269e46c(lVar7,0), puVar4 = PTR_DAT_05818978,
     puVar2 = PTR_DAT_05789778, lVar7 == 0)) {
LAB_01dc1244:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar1) {
    uVar15 = 0;
    do {
      if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar14 = *(long **)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
      if (plVar14 == (long *)0x0) goto LAB_01dc1244;
      uVar8 = (**(code **)(*plVar14 + 0x358))(plVar14,*(undefined8 *)(*plVar14 + 0x360));
      if ((uVar8 & 1) != 0) {
        uVar8 = (**(code **)(*plVar14 + 0x368))(plVar14,*(undefined8 *)(*plVar14 + 0x370));
        if ((uVar8 & 1) != 0) {
          uVar6 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          plVar9 = (long *)System_Type__GetTypeFromHandle_2690398(uVar6,0);
          uVar6 = (**(code **)(*plVar14 + 0x318))(plVar14,*(undefined8 *)(*plVar14 + 800));
          if (plVar9 == (long *)0x0) goto LAB_01dc1244;
          uVar8 = (**(code **)(*plVar9 + 0x408))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x410));
          if ((uVar8 & 1) != 0) {
            uVar6 = System_Reflection_PropertyInfo__GetValue_2ac6c8c(plVar14,lVar5,0);
            plVar9 = (long *)thunk_FUN_01320d5c(uVar6,*(undefined8 *)puVar2);
            if (plVar9 != (long *)0x0) {
              lVar12 = *plVar9;
              lVar11 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar11) {
                    puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_01dc118c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_0131971c(plVar9,lVar11,0);
LAB_01dc118c:
              uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar8 & 1) != 0) goto LAB_01dc119c;
            }
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            lVar5 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
            uVar6 = (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
            if (lVar5 != 0) {
              Modules_Contexts_Application_Events_Scripts_EventSender__SendInvalidConfigEvent_14976d4
                        (lVar5,uVar6,0);
              lVar5 = *(long *)(param_1 + 0x18);
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x10);
                if (lVar7 == 0) {
                  uVar6 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadDefaultConfigs_1cc19d4
                                    (lVar5);
                  *(undefined8 *)(lVar5 + 0x10) = uVar6;
                  FUN_012d0d74((long *)(lVar5 + 0x10),uVar6);
                  lVar7 = *(long *)(lVar5 + 0x10);
                }
                return lVar7;
              }
            }
            goto LAB_01dc1244;
          }
        }
      }
LAB_01dc119c:
      uVar1 = *(uint *)(lVar7 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar1);
  }
  return lVar5;
}

