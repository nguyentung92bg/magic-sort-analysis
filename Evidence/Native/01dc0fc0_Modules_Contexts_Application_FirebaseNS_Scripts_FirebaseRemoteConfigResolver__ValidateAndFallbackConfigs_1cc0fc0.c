/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$ValidateAndFallbackConfigs
Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ValidateAndFallbackConfigs (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this, Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* remoteConfigs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$ValidateAndFallbackConfigs
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o*
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ValidateAndFallbackConfigs
   (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this,
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigs_o* remoteConfigs, const
   MethodInfo* method); */

long Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__ValidateAndFallbackConfigs_1cc0fc0
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_058128c8;
  puVar3 = PTR_DAT_0578a3a8;
  if ((bRam0000000005c2778c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058128c8);
    FUN_012d0dc8(PTR_DAT_05818978);
    FUN_012d0dc8(PTR_DAT_05789778);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2778c = 1;
  }
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = System_Type__GetTypeFromHandle_2690398(uVar12,0);
  if ((lVar5 == 0) ||
     (lVar5 = System_Type__GetProperties_269e46c(lVar5,0), puVar4 = PTR_DAT_05818978,
     puVar2 = PTR_DAT_05789778, lVar5 == 0)) {
LAB_01dc1244:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar1) {
    uVar14 = 0;
    do {
      if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar13 = *(long **)(lVar5 + (long)(int)uVar14 * 8 + 0x20);
      if (plVar13 == (long *)0x0) goto LAB_01dc1244;
      uVar6 = (**(code **)(*plVar13 + 0x358))(plVar13,*(undefined8 *)(*plVar13 + 0x360));
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
        if ((uVar6 & 1) != 0) {
          uVar12 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          plVar7 = (long *)System_Type__GetTypeFromHandle_2690398(uVar12,0);
          uVar12 = (**(code **)(*plVar13 + 0x318))(plVar13,*(undefined8 *)(*plVar13 + 800));
          if (plVar7 == (long *)0x0) goto LAB_01dc1244;
          uVar6 = (**(code **)(*plVar7 + 0x408))(plVar7,uVar12,*(undefined8 *)(*plVar7 + 0x410));
          if ((uVar6 & 1) != 0) {
            uVar12 = System_Reflection_PropertyInfo__GetValue_2ac6c8c(plVar13,param_2,0);
            plVar7 = (long *)thunk_FUN_01320d5c(uVar12,*(undefined8 *)puVar2);
            if (plVar7 != (long *)0x0) {
              lVar10 = *plVar7;
              lVar9 = *(long *)puVar2;
              uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar9) {
                    puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_01dc118c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar8 = (undefined8 *)FUN_0131971c(plVar7,lVar9,0);
LAB_01dc118c:
              uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
              if ((uVar6 & 1) != 0) goto LAB_01dc119c;
            }
            if (cRam0000000005c230a8 == '\0') {
              FUN_012d0dc8(PTR_DAT_057ece38);
              cRam0000000005c230a8 = '\x01';
            }
            lVar5 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
            uVar12 = (**(code **)(*plVar13 + 0x208))(plVar13,*(undefined8 *)(*plVar13 + 0x210));
            if (lVar5 != 0) {
              Modules_Contexts_Application_Events_Scripts_EventSender__SendInvalidConfigEvent_14976d4
                        (lVar5,uVar12,0);
              lVar5 = *(long *)(param_1 + 0x18);
              if (lVar5 != 0) {
                lVar9 = *(long *)(lVar5 + 0x10);
                if (lVar9 == 0) {
                  uVar12 = Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__LoadDefaultConfigs_1cc19d4
                                     (lVar5);
                  *(undefined8 *)(lVar5 + 0x10) = uVar12;
                  FUN_012d0d74((long *)(lVar5 + 0x10),uVar12);
                  lVar9 = *(long *)(lVar5 + 0x10);
                }
                return lVar9;
              }
            }
            goto LAB_01dc1244;
          }
        }
      }
LAB_01dc119c:
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar1);
  }
  return param_2;
}

