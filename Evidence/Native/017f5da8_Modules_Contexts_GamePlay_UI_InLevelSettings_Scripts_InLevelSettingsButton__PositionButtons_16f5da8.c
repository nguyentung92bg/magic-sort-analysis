/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$PositionButtons
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__PositionButtons (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, bool isVibrationEnabled, bool isMusicEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$PositionButtons
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__PositionButtons
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, bool
   isVibrationEnabled, bool isMusicEnabled, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__PositionButtons_16f5da8
               (long param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_058033d0;
  if ((bRam0000000005c24b7f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809a08);
    FUN_012d0dc8(PTR_DAT_057a8c90);
    FUN_012d0dc8(PTR_DAT_058033d0);
    bRam0000000005c24b7f = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_05809a08;
  if (lVar7 == 0) goto LAB_017f62d8;
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057a8c90);
  *(long *)(param_1 + 0xa8) = lVar7;
  FUN_012d0d74((long *)(param_1 + 0xa8),lVar7);
  if (((param_2 & 1) == 0) || ((param_3 & 1) == 0)) {
    if ((((param_2 ^ 1) & 1) == 0) && ((param_3 & 1) == 0)) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0),
         uVar5 = _UNK_0433a378, lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0433a378,_UNK_0433a37c,0,lVar7,0);
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x60),0),
         lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a380,0,lVar7,0);
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x70),0),
         lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a384,0,lVar7,0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_017f62d8;
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_017f60e0;
    }
    if (((param_2 ^ 1) & param_3 & 1) == 0) {
      if (((param_2 & 1) != 0) || ((param_3 & 1) != 0)) {
        return;
      }
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0),
         uVar5 = _UNK_0433a378, lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0433a378,_UNK_0433a37c,0,lVar7,0);
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x70),0),
         lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a380,0,lVar7,0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_017f62d8;
      uVar8 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0),
         uVar5 = _UNK_0433a378, lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0433a378,_UNK_0433a37c,0,lVar7,0);
      if ((*(long *)(param_1 + 0x68) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x68),0),
         lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a380,0,lVar7,0);
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x70),0),
         lVar7 == 0)) goto LAB_017f62d8;
      UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a384,0,lVar7,0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_017f62d8;
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar6;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_017f62d8;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *puVar10 = uVar8;
        FUN_012d0d74(puVar10);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))();
      }
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_017f62d8;
      uVar8 = *(undefined8 *)(param_1 + 0x68);
    }
  }
  else {
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0),
       uVar5 = _UNK_0433a378, lVar7 == 0)) goto LAB_017f62d8;
    UnityEngine_Transform__set_localPosition_4092ce0(_UNK_0433a378,_UNK_0433a37c,0,lVar7,0);
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x68),0),
       lVar7 == 0)) goto LAB_017f62d8;
    UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a380,0,lVar7,0);
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x60),0),
       lVar7 == 0)) goto LAB_017f62d8;
    UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a384,0,lVar7,0);
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (lVar7 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x70),0),
       lVar7 == 0)) goto LAB_017f62d8;
    UnityEngine_Transform__set_localPosition_4092ce0(uVar5,_UNK_0433a388,0,lVar7,0);
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 == 0) goto LAB_017f62d8;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar6;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_017f62d8;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar8;
      FUN_012d0d74(puVar10);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 == 0) goto LAB_017f62d8;
    uVar8 = *(undefined8 *)(param_1 + 0x68);
LAB_017f60e0:
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar6;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_017f62d8;
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar8;
      FUN_012d0d74(puVar10);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 == 0) goto LAB_017f62d8;
    uVar8 = *(undefined8 *)(param_1 + 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar11 = *(long *)puVar6;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar8;
      FUN_012d0d74(puVar10);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar6;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar10 = uVar8;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x017f6228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))();
        return;
      }
    }
  }
LAB_017f62d8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

