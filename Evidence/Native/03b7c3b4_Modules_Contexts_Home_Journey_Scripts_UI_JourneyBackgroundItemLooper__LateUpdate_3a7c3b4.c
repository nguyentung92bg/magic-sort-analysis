/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$LateUpdate
void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__LateUpdate (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$LateUpdate
   void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__LateUpdate
   (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__LateUpdate_3a7c3b4
               (long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x54);
    fVar3 = *(float *)(lVar1 + 0x58);
    fVar5 = *(float *)(param_1 + 0x30) - *(float *)(lVar1 + 0x50);
    fVar6 = *(float *)(param_1 + 0x34) - fVar2;
    fVar4 = *(float *)(param_1 + 0x38) - fVar3;
    if (_UNK_04321dec <= fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) {
      *(float *)(param_1 + 0x30) = *(float *)(lVar1 + 0x50);
      *(float *)(param_1 + 0x34) = fVar2;
      *(float *)(param_1 + 0x38) = fVar3;
      Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__UpdateBackgroundItems_3a7c430
                (param_1);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03b7c42c;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x54);
    }
    return;
  }
LAB_03b7c42c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

