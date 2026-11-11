/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$Initialize
void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__Initialize (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Journey.Scripts.UI.JourneyBackgroundItemLooper$$Initialize
   void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__Initialize
   (Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Journey_Scripts_UI_JourneyBackgroundItemLooper__Initialize_3a7c2a0
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000005c35ae6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad170);
    FUN_012d0dc8(PTR_DAT_0578c878);
    bRam0000000005c35ae6 = 1;
  }
  puVar2 = PTR_DAT_0578c878;
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    fVar5 = -*(float *)(*(long *)(param_1 + 0x18) + 0x54);
    uVar4 = 0;
    fVar6 = fVar5 - *(float *)(param_1 + 0x28);
    do {
      if (*(int *)(lVar3 + 0x18) <= (int)uVar4) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != 0) {
          uVar1 = *(undefined4 *)(lVar3 + 0x58);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 0x50);
          *(undefined4 *)(param_1 + 0x38) = uVar1;
          return;
        }
        break;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,uVar4,*(undefined8 *)puVar2);
      if (lVar3 == 0) break;
      lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) break;
        UnityEngine_Transform__set_localPosition_4092ce0(0,fVar5,0,lVar3,0);
        fVar5 = fVar5 + *(float *)(param_1 + 0x28);
      }
      else {
        if (lVar3 == 0) break;
        UnityEngine_Transform__set_localPosition_4092ce0(0,fVar6,0,lVar3,0);
        fVar6 = fVar6 - *(float *)(param_1 + 0x28);
      }
      lVar3 = *(long *)(param_1 + 0x20);
      uVar4 = uVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

