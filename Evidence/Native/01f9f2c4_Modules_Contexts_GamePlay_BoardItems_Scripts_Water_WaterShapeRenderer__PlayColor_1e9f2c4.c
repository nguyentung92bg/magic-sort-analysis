/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$PlayColor
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__PlayColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$PlayColor
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__PlayColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   float duration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__PlayColor_1e9f2c4
               (undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar7 = *(undefined8 *)(param_3 + 0x78);
  if ((bRam0000000005c2819b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d4a60);
    FUN_012d0dc8(PTR_DAT_057710a8);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05786bf0);
    FUN_012d0dc8(PTR_DAT_057ac7b0);
    bRam0000000005c2819b = 1;
  }
  plVar8 = (long *)(param_2 + 0xb0);
  if (*plVar8 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
  }
  puVar4 = PTR_DAT_057d4a60;
  if (*(long *)(param_2 + 0x28) != 0) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_2 + 0x28),uVar7,0);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0x3f800000;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__UpdateMaterialProperties_1e9e9b0
              (param_2);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_057710a8;
    if (lVar5 != 0) {
      DG_Tweening_Core_DOGetter_Color____ctor_156c9ec
                (lVar5,param_2,*(undefined8 *)PTR_DAT_05786bf0,0);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057815e0;
      if (lVar6 != 0) {
        DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                  (lVar6,param_2,*(undefined8 *)PTR_DAT_057ac7b0,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = DG_Tweening_DOTween__To_1ed8b94
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_1,lVar5,lVar6,0);
        *plVar8 = lVar5;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

